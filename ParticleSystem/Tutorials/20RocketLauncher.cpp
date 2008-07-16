// General OpenSG configuration, needed everywhere
#include <OpenSG/OSGConfig.h>

// A little helper to simplify scene management and interaction
#include <OpenSG/OSGSimpleSceneManager.h>
#include <OpenSG/OSGNode.h>
#include <OpenSG/OSGGroup.h>
#include <OpenSG/OSGViewport.h>
#include <OpenSG/Input/OSGWindowUtils.h>

// Input
#include <OpenSG/Input/OSGKeyListener.h>
#include <OpenSG/Input/OSGWindowAdapter.h>

#include <OpenSG/OSGBlendChunk.h>
#include <OpenSG/OSGPointChunk.h>
#include <OpenSG/OSGChunkMaterial.h>
#include <OpenSG/OSGMaterialChunk.h>
#include <OpenSG/OSGTextureChunk.h>
#include <OpenSG/OSGImageFileHandler.h>

#include <OpenSG/OSGSimpleSceneManager.h>
#include <OpenSG/OSGSceneFileHandler.h>

#include <OpenSG/ParticleSystem/OSGParticleSystem.h>
#include <OpenSG/ParticleSystem/OSGParticleSystemCore.h>
#include <OpenSG/ParticleSystem/OSGNodeParticleSystemCore.h>

#include <OpenSG/ParticleSystem/OSGPointParticleSystemDrawer.h>
#include <OpenSG/ParticleSystem/OSGLineParticleSystemDrawer.h>
#include <OpenSG/ParticleSystem/OSGQuadParticleSystemDrawer.h>

#include <OpenSG/ParticleSystem/OSGAgeFadeParticleAffector.h>
#include <OpenSG/ParticleSystem/OSGAgeSizeParticleAffector.h>
#include <OpenSG/ParticleSystem/OSGCollectiveGravityParticleSystemAffector.h>

#include <OpenSG/ParticleSystem/OSGRateParticleGenerator.h>
#include <OpenSG/ParticleSystem/OSGBurstParticleGenerator.h>

#include <OpenSG/Dynamics/OSGLineDistribution3D.h>
#include <OpenSG/Dynamics/OSGCylinderDistribution3D.h>
#include <OpenSG/Dynamics/OSGGaussianNormalDistribution1D.h>
#include <OpenSG/Dynamics/OSGDiscDistribution3D.h>
#include <OpenSG/Dynamics/OSGSphereDistribution3D.h>

#include <OpenSG/Dynamics/OSGDataConverter.h>
#include <OpenSG/Dynamics/OSGCompoundFunction.h>

// Activate the OpenSG namespace
OSG_USING_NAMESPACE

// The SimpleSceneManager to manage simple applications
SimpleSceneManager *mgr;

bool ExitApp = false;

// Forward declaration so we can have the interesting stuff upfront
void display(void);
void reshape(Vec2f Size);

//Particle System Drawer
PointParticleSystemDrawerPtr ExampleRocketParticleSystemDrawer;
QuadParticleSystemDrawerPtr SmokeParticleSystemDrawer;
PointParticleSystemDrawerPtr ExampleShrapnelParticleSystemDrawer;

ParticleSystemPtr RocketParticleSystem;
ParticleSystemPtr SmokeParticleSystem;
ParticleSystemPtr ShrapnelParticleSystem;

BurstParticleGeneratorPtr ShrapnelBurstGenerator;
RateParticleGeneratorPtr SmokeGenerator;

AgeFadeParticleAffectorPtr SmokeAgeFadeParticleAffector;
AgeSizeParticleAffectorPtr SmokeAgeSizeParticleAffector;
ParticleSystemCorePtr PointParticleNodeCore;

FunctionPtr createPositionDistribution(void);
FunctionPtr createLifespanDistribution(void);
FunctionPtr createSmokeVelocityDistribution(void);
FunctionPtr createSmokeLifespanDistribution(void);
FunctionPtr createSmokePositionDistribution(void);
FunctionPtr createShrapnelPositionDistribution(void);
FunctionPtr createShrapnelAccelerationDistribution(void);
FunctionPtr createShrapnelVelocityDistribution(void);



// Create a class to allow for the use of the Ctrl+q
class TutorialKeyListener : public KeyListener
{
public:

   virtual void keyPressed(const KeyEvent& e)
   {
       if(e.getKey() == KeyEvent::KEY_Q && e.getModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
       {
           ExitApp = true;
       }

	   if(e.getKey() == KeyEvent::KEY_B)//generate particles when clicked
	   {
		  //Attach the Generator to the Shrapnel Particle System
				beginEditCP(ShrapnelParticleSystem, ParticleSystem::GeneratorsFieldMask);
					ShrapnelParticleSystem->getGenerators().push_back(ShrapnelBurstGenerator);
				endEditCP(ShrapnelParticleSystem, ParticleSystem::GeneratorsFieldMask);
		
		//Attach the Affector to the Smoke Particle System
				beginEditCP(SmokeParticleSystem, ParticleSystem::GeneratorsFieldMask | ParticleSystem::AffectorsFieldMask);
					SmokeParticleSystem->getGenerators().push_back(SmokeGenerator);
					SmokeParticleSystem->getAffectors().push_back(SmokeAgeFadeParticleAffector);
					SmokeParticleSystem->getAffectors().push_back(SmokeAgeSizeParticleAffector);
				endEditCP(SmokeParticleSystem, ParticleSystem::GeneratorsFieldMask | ParticleSystem::AffectorsFieldMask);

	   }
   }

   virtual void keyReleased(const KeyEvent& e)
   {
   }

   virtual void keyTyped(const KeyEvent& e)
   {
	   if(e.getKey()== KeyEvent::KEY_1) // Use the Point Drawer
	   {
			
	   }

   }
};

class TutorialWindowListener : public WindowAdapter
{
public:
    virtual void windowClosing(const WindowEvent& e)
    {
        ExitApp = true;
    }

    virtual void windowClosed(const WindowEvent& e)
    {
        ExitApp = true;
    }
};

class TutorialMouseListener : public MouseListener
{
  public:
    virtual void mouseClicked(const MouseEvent& e)
    {
    }
    virtual void mouseEntered(const MouseEvent& e)
    {
    }
    virtual void mouseExited(const MouseEvent& e)
    {
    }
    virtual void mousePressed(const MouseEvent& e)
    {
		if(WindowEventProducer::Ptr::dcast(e.getSource())->getKeyModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
		{
            mgr->mouseButtonPress(e.getButton(), e.getLocation().x(), e.getLocation().y());
		}
		else
		{
          Line TheRay;
			if(e.getButton() == MouseEvent::BUTTON1)
			{
				std::cout<<e.getLocation()<<std::endl;
				
				mgr->getCamera()->calcViewRay(TheRay,e.getLocation().x(),e.getLocation().y(),*(mgr->getWindow()->getPort(0)));
				std::cout<<TheRay.getPosition()<<" "<<TheRay.getDirection()<<std::endl;
			}
			RocketParticleSystem->addParticle(TheRay.getPosition(),
			Vec3f(0.0,0.0f,1.0f),
			Color4f(1.0,0.0,0.0,1.0), 
			Vec3f(1.0,1.0,1.0), 
			10, 
			Vec3f(TheRay.getDirection()*50), //Velocity
			Vec3f(0.0f,0.0f,0.0f)
			,0);
		}
    }
    virtual void mouseReleased(const MouseEvent& e)
    {
		if(WindowEventProducer::Ptr::dcast(e.getSource())->getKeyModifiers() & KeyEvent::KEY_MODIFIER_CONTROL)
		{
           mgr->mouseButtonRelease(e.getButton(), e.getLocation().x(), e.getLocation().y());
		}
    }
};

class TutorialMouseMotionListener : public MouseMotionListener
{
  public:
    virtual void mouseMoved(const MouseEvent& e)
    {
            mgr->mouseMove(e.getLocation().x(), e.getLocation().y());
    }

    virtual void mouseDragged(const MouseEvent& e)
    {
            mgr->mouseMove(e.getLocation().x(), e.getLocation().y());
    }
};
int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);

    // Set up Window
    WindowEventProducerPtr TutorialWindowEventProducer = createDefaultWindowEventProducer();
    WindowPtr MainWindow = TutorialWindowEventProducer->initWindow();

	beginEditCP(TutorialWindowEventProducer, WindowEventProducer::UseCallbackForDrawFieldMask | WindowEventProducer::UseCallbackForReshapeFieldMask);
		TutorialWindowEventProducer->setUseCallbackForDraw(true);
		TutorialWindowEventProducer->setUseCallbackForReshape(true);
	endEditCP(TutorialWindowEventProducer, WindowEventProducer::UseCallbackForDrawFieldMask | WindowEventProducer::UseCallbackForReshapeFieldMask);

    TutorialWindowEventProducer->setDisplayCallback(display);
    TutorialWindowEventProducer->setReshapeCallback(reshape);

    //Add Window Listener
    TutorialWindowListener TheTutorialWindowListener;
    TutorialWindowEventProducer->addWindowListener(&TheTutorialWindowListener);
    TutorialKeyListener TheKeyListener;
    TutorialWindowEventProducer->addKeyListener(&TheKeyListener);
    TutorialMouseListener TheTutorialMouseListener;
    TutorialMouseMotionListener TheTutorialMouseMotionListener;
    TutorialWindowEventProducer->addMouseListener(&TheTutorialMouseListener);
    TutorialWindowEventProducer->addMouseMotionListener(&TheTutorialMouseMotionListener);

    // Create the SimpleSceneManager helper
    mgr = new SimpleSceneManager;

    // Tell the Manager what to manage
    mgr->setWindow(MainWindow);
	
    TutorialWindowEventProducer->openWindow(Pnt2f(0,0),
                                        Vec2f(1280,1024),
                                        "OpenSG 20RocketLauncher Window");
										

	//Particle System Material
		//point material
	PointChunkPtr PSPointChunk = PointChunk::create();
	beginEditCP(PSPointChunk);
		PSPointChunk->setSize(5.0f);
		PSPointChunk->setSmooth(true);
	endEditCP(PSPointChunk);
	BlendChunkPtr PSBlendChunk = BlendChunk::create();
	PSBlendChunk->setSrcFactor(GL_SRC_ALPHA);
	PSBlendChunk->setDestFactor(GL_ONE_MINUS_SRC_ALPHA);

	MaterialChunkPtr PSMaterialChunkChunk = MaterialChunk::create();
	beginEditCP(PSMaterialChunkChunk);
		PSMaterialChunkChunk->setAmbient(Color4f(0.3f,0.3f,0.3f,1.0f));
		PSMaterialChunkChunk->setDiffuse(Color4f(0.7f,0.7f,0.7f,1.0f));
		PSMaterialChunkChunk->setSpecular(Color4f(0.9f,0.9f,0.9f,1.0f));
		PSMaterialChunkChunk->setColorMaterial(GL_AMBIENT_AND_DIFFUSE);
	endEditCP(PSMaterialChunkChunk);

	ChunkMaterialPtr PSPointMaterial = ChunkMaterial::create();
	beginEditCP(PSPointMaterial, ChunkMaterial::ChunksFieldMask);
		PSPointMaterial->addChunk(PSPointChunk);
		PSPointMaterial->addChunk(PSMaterialChunkChunk);
		PSPointMaterial->addChunk(PSBlendChunk);
	endEditCP(PSPointMaterial, ChunkMaterial::ChunksFieldMask);

		//smoke material
	TextureChunkPtr QuadTextureChunk = TextureChunk::create();
    ImagePtr LoadedImage = ImageFileHandler::the().read("Data/Smoke.png");    
    beginEditCP(QuadTextureChunk, TextureChunk::ImageFieldMask);
        QuadTextureChunk->setImage(LoadedImage);
        QuadTextureChunk->setEnvMode(GL_MODULATE);
    endEditCP(QuadTextureChunk, TextureChunk::ImageFieldMask);

	MaterialChunkPtr PSMaterialChunk = MaterialChunk::create();
	beginEditCP(PSMaterialChunk);
		PSMaterialChunk->setAmbient(Color4f(0.3f,0.3f,0.3f,1.0f));
		PSMaterialChunk->setDiffuse(Color4f(0.7f,0.7f,0.7f,1.0f));
		PSMaterialChunk->setSpecular(Color4f(0.9f,0.9f,0.9f,1.0f));
		PSMaterialChunk->setColorMaterial(GL_AMBIENT_AND_DIFFUSE);
	endEditCP(PSMaterialChunk);

	ChunkMaterialPtr PSSmokeMaterial = ChunkMaterial::create();
	beginEditCP(PSSmokeMaterial, ChunkMaterial::ChunksFieldMask);
		PSSmokeMaterial->addChunk(QuadTextureChunk);
		PSSmokeMaterial->addChunk(PSMaterialChunk);
		PSSmokeMaterial->addChunk(PSBlendChunk);
	endEditCP(PSSmokeMaterial, ChunkMaterial::ChunksFieldMask);


	//Particle System
		//Rocket
    RocketParticleSystem = osg::ParticleSystem::create();
	RocketParticleSystem->attachUpdateListener(TutorialWindowEventProducer);
		//smoke
	SmokeParticleSystem = osg::ParticleSystem::create();
	SmokeParticleSystem->attachUpdateListener(TutorialWindowEventProducer);
		//Shrapnel
	ShrapnelParticleSystem = osg::ParticleSystem::create();
	ShrapnelParticleSystem->attachUpdateListener(TutorialWindowEventProducer);


	//Particle System Drawer
		//Rocket
	ExampleRocketParticleSystemDrawer = osg::PointParticleSystemDrawer::create();
    ExampleRocketParticleSystemDrawer->setForcePerParticleSizing(true);
		//Smoke
	SmokeParticleSystemDrawer = osg::QuadParticleSystemDrawer::create();
	//SmokeParticleSystemDrawer->setQuadSizeScaling(Vec2f(0.5f,0.5f));
		//Shrapnel
	ExampleShrapnelParticleSystemDrawer = osg::PointParticleSystemDrawer::create();
    ExampleShrapnelParticleSystemDrawer->setForcePerParticleSizing(true);

		
	
	//Particle System Node
		//Rocket
	//NodePtr ParticlePrototypeNode = makeTorus(1.0,4.0,16,16);
//	NodePtr FireballPrototypeNode = makeSphere(4, 1.0f);

	NodePtr RocketParticlePrototypeNode = SceneFileHandler::the().read("Data/rocket.obj");
	

    NodeParticleSystemCorePtr RocketParticleNodeCore = osg::NodeParticleSystemCore::create();
    beginEditCP(RocketParticleNodeCore, NodeParticleSystemCore::SystemFieldMask | NodeParticleSystemCore::PrototypeNodeFieldMask);
		RocketParticleNodeCore->setSystem(RocketParticleSystem);
		RocketParticleNodeCore->setPrototypeNode(RocketParticlePrototypeNode);
        RocketParticleNodeCore->setNormalSource(NodeParticleSystemCore::NORMAL_VELOCITY);
        RocketParticleNodeCore->setUpSource(NodeParticleSystemCore::UP_STATIC);
        RocketParticleNodeCore->setUp(Vec3f(0.0f,1.0f,0.0f));
    endEditCP(RocketParticleNodeCore, NodeParticleSystemCore::SystemFieldMask | NodeParticleSystemCore::PrototypeNodeFieldMask);
	
	NodePtr ParticleNode = osg::Node::create();
    beginEditCP(ParticleNode, Node::CoreFieldMask);
        ParticleNode->setCore(RocketParticleNodeCore);
    endEditCP(ParticleNode, Node::CoreFieldMask);
		
		//Smoke
	SmokeGenerator = osg::RateParticleGenerator::create();
			//Attach the function objects to the Generator
	beginEditCP(SmokeGenerator, RateParticleGenerator::PositionFunctionFieldMask | RateParticleGenerator::LifespanFunctionFieldMask | RateParticleGenerator::GenerationRateFieldMask);
		SmokeGenerator->setPositionFunction(createSmokePositionDistribution());
		SmokeGenerator->setLifespanFunction(createSmokeLifespanDistribution());
		SmokeGenerator->setGenerationRate(30.0);
		SmokeGenerator->setVelocityFunction(createSmokeVelocityDistribution());
	endEditCP(SmokeGenerator, RateParticleGenerator::PositionFunctionFieldMask | RateParticleGenerator::LifespanFunctionFieldMask | RateParticleGenerator::GenerationRateFieldMask);
			//Attach the function objects the Affectors
	SmokeAgeFadeParticleAffector = osg::AgeFadeParticleAffector::create();
	beginEditCP(SmokeAgeFadeParticleAffector, AgeFadeParticleAffector::FadeInTimeFieldMask | AgeFadeParticleAffector::FadeOutTimeFieldMask | AgeFadeParticleAffector::StartAlphaFieldMask| AgeFadeParticleAffector::FadeToAlphaFieldMask | AgeFadeParticleAffector::EndAlphaFieldMask);
		SmokeAgeFadeParticleAffector->setFadeInTime(2.0f);
		SmokeAgeFadeParticleAffector->setFadeOutTime(5.0f);
		SmokeAgeFadeParticleAffector->setStartAlpha(0.0f);
		SmokeAgeFadeParticleAffector->setFadeToAlpha(1.0f);
		SmokeAgeFadeParticleAffector->setEndAlpha(0.0f);	
	endEditCP(SmokeAgeFadeParticleAffector, AgeFadeParticleAffector::FadeInTimeFieldMask | AgeFadeParticleAffector::FadeOutTimeFieldMask | AgeFadeParticleAffector::StartAlphaFieldMask| AgeFadeParticleAffector::FadeToAlphaFieldMask | AgeFadeParticleAffector::EndAlphaFieldMask);

	SmokeAgeSizeParticleAffector = osg::AgeSizeParticleAffector::create();
	beginEditCP(SmokeAgeSizeParticleAffector,AgeSizeParticleAffector::AgesFieldMask | AgeSizeParticleAffector::SizesFieldMask);
			//ages
			SmokeAgeSizeParticleAffector->getAges().push_back(0.1);
			SmokeAgeSizeParticleAffector->getAges().push_back(0.2);
			SmokeAgeSizeParticleAffector->getAges().push_back(0.3);
			SmokeAgeSizeParticleAffector->getAges().push_back(0.5);
			SmokeAgeSizeParticleAffector->getAges().push_back(0.7);
			SmokeAgeSizeParticleAffector->getAges().push_back(0.8);
			SmokeAgeSizeParticleAffector->getAges().push_back(1.0);

			//sizes
			SmokeAgeSizeParticleAffector->getSizes().push_back(Vec3f(0.5,0.5,0.5));
			SmokeAgeSizeParticleAffector->getSizes().push_back(Vec3f(1.0,1.0,1.0));
			SmokeAgeSizeParticleAffector->getSizes().push_back(Vec3f(2.0,2.0,2.0));
			SmokeAgeSizeParticleAffector->getSizes().push_back(Vec3f(3.0,3.0,3.0));
			SmokeAgeSizeParticleAffector->getSizes().push_back(Vec3f(4.0,4.0,4.0));
			SmokeAgeSizeParticleAffector->getSizes().push_back(Vec3f(5.0,5.0,5.0));
			SmokeAgeSizeParticleAffector->getSizes().push_back(Vec3f(6.5,6.5,6.5));
			
	endEditCP(SmokeAgeSizeParticleAffector,AgeSizeParticleAffector::AgesFieldMask | AgeSizeParticleAffector::SizesFieldMask);
   
	ParticleSystemCorePtr SmokeParticleNodeCore = osg::ParticleSystemCore::create();
    beginEditCP(SmokeParticleNodeCore, ParticleSystemCore::SystemFieldMask | ParticleSystemCore::DrawerFieldMask | ParticleSystemCore::MaterialFieldMask);
		SmokeParticleNodeCore->setSystem(SmokeParticleSystem);
		SmokeParticleNodeCore->setDrawer(SmokeParticleSystemDrawer);
		SmokeParticleNodeCore->setMaterial(PSSmokeMaterial);
    endEditCP(SmokeParticleNodeCore, ParticleSystemCore::SystemFieldMask | ParticleSystemCore::DrawerFieldMask | ParticleSystemCore::MaterialFieldMask);
    
	NodePtr SmokeParticleNode = osg::Node::create();
    beginEditCP(SmokeParticleNode, Node::CoreFieldMask);
        SmokeParticleNode->setCore(SmokeParticleNodeCore);
    endEditCP(SmokeParticleNode, Node::CoreFieldMask);

		//Shrapnel
	ShrapnelBurstGenerator = osg::BurstParticleGenerator::create();
	NodePtr ShrapnelParticlePrototypeNode = SceneFileHandler::the().read("Data/Shrapnel.obj");

    NodeParticleSystemCorePtr ShrapnelParticleNodeCore = osg::NodeParticleSystemCore::create();
    beginEditCP(ShrapnelParticleNodeCore, NodeParticleSystemCore::SystemFieldMask | NodeParticleSystemCore::PrototypeNodeFieldMask);
		ShrapnelParticleNodeCore->setSystem(ShrapnelParticleSystem);
		ShrapnelParticleNodeCore->setPrototypeNode(ShrapnelParticlePrototypeNode);
       // ShrapnelParticleNodeCore->setNormalSource(NodeParticleSystemCore::NORMAL_VELOCITY);
       // ShrapnelParticleNodeCore->setUpSource(NodeParticleSystemCore::UP_STATIC);
       // ShrapnelParticleNodeCore->setUp(Vec3f(0.0f,1.0f,0.0f));
    endEditCP(ShrapnelParticleNodeCore, NodeParticleSystemCore::SystemFieldMask | NodeParticleSystemCore::PrototypeNodeFieldMask);
			
			//Attach the function objects to the Generator
	beginEditCP(ShrapnelBurstGenerator, BurstParticleGenerator::PositionFunctionFieldMask | BurstParticleGenerator::LifespanFunctionFieldMask);
		ShrapnelBurstGenerator->setPositionFunction(createShrapnelPositionDistribution());
		ShrapnelBurstGenerator->setLifespanFunction(createLifespanDistribution());
		ShrapnelBurstGenerator->setBurstAmount(50.0);
		ShrapnelBurstGenerator->setVelocityFunction(createShrapnelVelocityDistribution());
		ShrapnelBurstGenerator->setAccelerationFunction(createShrapnelAccelerationDistribution());
	endEditCP(ShrapnelBurstGenerator, BurstParticleGenerator::PositionFunctionFieldMask | BurstParticleGenerator::LifespanFunctionFieldMask);

	NodePtr ShrapnelParticleNode = osg::Node::create();
    beginEditCP(ShrapnelParticleNode, Node::CoreFieldMask);
        ShrapnelParticleNode->setCore(ShrapnelParticleNodeCore);
    endEditCP(ShrapnelParticleNode, Node::CoreFieldMask);
	
	
	
/////////////////////////
	//NodePtr RocketNode = SceneFileHandler::the().read("Data/rocket.obj");


    // Make Main Scene Node 
    NodePtr scene = osg::Node::create();
    beginEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);
        scene->setCore(osg::Group::create());
        //scene->addChild(ParticleNode);
		//scene->addChild(SmokeParticleNode);
		scene->addChild(ShrapnelParticleNode);
    endEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);

    mgr->setRoot(scene);

	mgr->getNavigator()->set(Pnt3f(0.0,0.0,0.0), Pnt3f(0.0,0.0,-1.0), Vec3f(0.0,1.0,0.0));
	mgr->getNavigator()->setMotionFactor(1.0f);
	mgr->getCamera()->setNear(0.1f);
	mgr->getCamera()->setFar(1000.0f);


    while(!ExitApp)
    {
        TutorialWindowEventProducer->update();
        TutorialWindowEventProducer->draw();
    }
    osgExit();

    return 0;
}


// Callback functions


// Redraw the window
void display(void)
{
    mgr->redraw();
}

// React to size changes
void reshape(Vec2f Size)
{
    mgr->resize(Size.x(), Size.y());
}

FunctionPtr createPositionDistribution(void)
{
    //Cylinder Distribution
    CylinderDistribution3DPtr TheCylinderDistribution = CylinderDistribution3D::create();
    beginEditCP(TheCylinderDistribution);
      TheCylinderDistribution->setCenter(Pnt3f(0.0,0.0,0.0));
      TheCylinderDistribution->setInnerRadius(30.0);
      TheCylinderDistribution->setOuterRadius(100.0);
      TheCylinderDistribution->setMinTheta(0.0);
      TheCylinderDistribution->setMaxTheta(6.283185);
      TheCylinderDistribution->setHeight(400.0);
      TheCylinderDistribution->setNormal(Vec3f(0.0,0.0,1.0));
      TheCylinderDistribution->setSurfaceOrVolume(CylinderDistribution3D::SURFACE);
    endEditCP(TheCylinderDistribution);

    return TheCylinderDistribution;
}

FunctionPtr createShrapnelPositionDistribution(void)
{
    //Sphere Distribution
    SphereDistribution3DPtr TheSphereDistribution = SphereDistribution3D::create();
    beginEditCP(TheSphereDistribution);
      TheSphereDistribution->setCenter(Pnt3f(0.0,0.0,0.0));
      TheSphereDistribution->setInnerRadius(0.0);
      TheSphereDistribution->setOuterRadius(3.0);
      TheSphereDistribution->setMinTheta(0.0);
      TheSphereDistribution->setMaxTheta(6.283185);
      TheSphereDistribution->setMinZ(-1.0);
      TheSphereDistribution->setMaxZ(1.0);
	  TheSphereDistribution->setSurfaceOrVolume(SphereDistribution3D::SURFACE);
    endEditCP(TheSphereDistribution);

    return TheSphereDistribution;
}
FunctionPtr createLifespanDistribution(void)
{
    GaussianNormalDistribution1DPtr TheLifespanDistribution = GaussianNormalDistribution1D::create();
    beginEditCP(TheLifespanDistribution);
      TheLifespanDistribution->setMean(100.0f);
      TheLifespanDistribution->setStandardDeviation(2.0);
    endEditCP(TheLifespanDistribution);
	
	return TheLifespanDistribution;
}
FunctionPtr createSmokePositionDistribution(void)
{
     //Disc Distribution
    DiscDistribution3DPtr TheDiscDistribution = DiscDistribution3D::create();
    beginEditCP(TheDiscDistribution);
      TheDiscDistribution->setCenter(Pnt3f(0.0,0.0,0.0));
      TheDiscDistribution->setInnerRadius(01.0);
      TheDiscDistribution->setOuterRadius(02.0);
      TheDiscDistribution->setMinTheta(0.0);
      TheDiscDistribution->setMaxTheta(6.283185307);
      TheDiscDistribution->setNormal(Vec3f(1.0,0.0,0.0));
      TheDiscDistribution->setSurfaceOrEdge(DiscDistribution3D::SURFACE);
    endEditCP(TheDiscDistribution);


    return TheDiscDistribution;
}

FunctionPtr createSmokeLifespanDistribution(void)
{
    GaussianNormalDistribution1DPtr TheLifespanDistribution = GaussianNormalDistribution1D::create();
    beginEditCP(TheLifespanDistribution);
      TheLifespanDistribution->setMean(5.0f);
      TheLifespanDistribution->setStandardDeviation(0.5);
    endEditCP(TheLifespanDistribution);
	
	return TheLifespanDistribution;
}

FunctionPtr createSmokeVelocityDistribution(void)
{
	 //Sphere Distribution
    LineDistribution3DPtr TheLineDistribution = LineDistribution3D::create();
    beginEditCP(TheLineDistribution);
 		TheLineDistribution->setPoint1(Pnt3f(0.0,0.0,1.0));
		TheLineDistribution->setPoint2(Pnt3f(0.0,0.0,3.0));
    endEditCP(TheLineDistribution);

	DataConverterPtr TheVec3fConverter = DataConverter::create();
	beginEditCP(TheVec3fConverter);
		TheVec3fConverter->setToType(&FieldDataTraits<Vec3f>::getType());
	endEditCP(TheVec3fConverter);

	CompoundFunctionPtr TheVelocityDistribution = CompoundFunction::create();
	beginEditCP(TheVelocityDistribution);
		TheVelocityDistribution->getFunctions().push_back(TheLineDistribution);
		TheVelocityDistribution->getFunctions().push_back(TheVec3fConverter);
	endEditCP(TheVelocityDistribution);

    return TheVelocityDistribution;
}
FunctionPtr createShrapnelAccelerationDistribution(void)
{

	 //Sphere Distribution
    LineDistribution3DPtr TheLineDistribution = LineDistribution3D::create();
    beginEditCP(TheLineDistribution);
      TheLineDistribution->setPoint1(Pnt3f(0.0,0.0,-3.0));
	  TheLineDistribution->setPoint2(Pnt3f(0.0,0.0,-3.0));
    endEditCP(TheLineDistribution);

	DataConverterPtr TheVec3fConverter = DataConverter::create();
	beginEditCP(TheVec3fConverter);
		TheVec3fConverter->setToType(&FieldDataTraits<Vec3f>::getType());
	endEditCP(TheVec3fConverter);

	CompoundFunctionPtr TheAccelerationDistribution = CompoundFunction::create();
	beginEditCP(TheAccelerationDistribution);
		TheAccelerationDistribution->getFunctions().push_back(TheLineDistribution);
		TheAccelerationDistribution->getFunctions().push_back(TheVec3fConverter);
	endEditCP(TheAccelerationDistribution);

    return TheAccelerationDistribution;
} 
FunctionPtr createShrapnelVelocityDistribution(void)
{
   

	 //Sphere Distribution
    SphereDistribution3DPtr TheSphereDistribution = SphereDistribution3D::create();
    beginEditCP(TheSphereDistribution);
      TheSphereDistribution->setCenter(Pnt3f(0.0,0.0,0.0));
      TheSphereDistribution->setInnerRadius(3.0);
      TheSphereDistribution->setOuterRadius(10.0);
      TheSphereDistribution->setMinTheta(-3.141950);
      TheSphereDistribution->setMaxTheta(3.141950);
      TheSphereDistribution->setMinZ(-1.0);
      TheSphereDistribution->setMaxZ(1.0);
	  TheSphereDistribution->setSurfaceOrVolume(SphereDistribution3D::VOLUME);
    endEditCP(TheSphereDistribution);

	DataConverterPtr TheVec3fConverter = DataConverter::create();
	beginEditCP(TheVec3fConverter);
		TheVec3fConverter->setToType(&FieldDataTraits<Vec3f>::getType());
	endEditCP(TheVec3fConverter);

	CompoundFunctionPtr TheVelocityDistribution = CompoundFunction::create();
	beginEditCP(TheVelocityDistribution);
		TheVelocityDistribution->getFunctions().push_back(TheSphereDistribution);
		TheVelocityDistribution->getFunctions().push_back(TheVec3fConverter);
	endEditCP(TheVelocityDistribution);

    return TheVelocityDistribution;
}