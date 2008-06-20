// OpenSG Tutorial Example: Creating a Label and Creating Fonts
//
// This tutorial explains how to change Fonts and create
// Labels
// 
// Includes: Font and Label creation and settings

// General OpenSG configuration, needed everywhere
#include <OpenSG/OSGConfig.h>

// Methods to create simple geometry: boxes, spheres, tori etc.
#include <OpenSG/OSGSimpleGeometry.h>

// A little helper to simplify scene management and interaction
#include <OpenSG/OSGSimpleSceneManager.h>
#include <OpenSG/OSGNode.h>
#include <OpenSG/OSGGroup.h>
#include <OpenSG/OSGViewport.h>

// the general scene file loading handler
#include <OpenSG/OSGSceneFileHandler.h>

//Input
#include <OpenSG/Input/OSGWindowUtils.h>
#include <OpenSG/Input/OSGWindowAdapter.h>
#include <OpenSG/Input/OSGMouseAdapter.h>

// UserInterface Headers
#include <OpenSG/UserInterface/OSGInternalWindow.h>
#include <OpenSG/UserInterface/OSGUIForeground.h>
#include <OpenSG/UserInterface/OSGUIBackgrounds.h>
#include <OpenSG/UserInterface/OSGUIDrawingSurface.h>
#include <OpenSG/UserInterface/OSGGraphics2D.h>
#include <OpenSG/UserInterface/OSGFlowLayout.h>
#include <OpenSG/UserInterface/OSGBorderLayout.h>
#include <OpenSG/UserInterface/OSGGridBagLayout.h>
#include <OpenSG/UserInterface/OSGBorderLayoutConstraints.h>
#include <OpenSG/UserInterface/OSGGridBagLayoutConstraints.h>
#include <OpenSG/UserInterface/OSGGradientUIBackground.h>
#include <OpenSG/UserInterface/OSGLookAndFeelManager.h>
//#include <OpenSG/UserInterface/OSGUIDefines.h>
#include <OpenSG/OSGTypeFactory.h>
#include <OpenSG/OSGFieldFactory.h>
#include <OpenSG/OSGFieldContainerFactory.h>

// Include Label and Font headerfiles
#include <OpenSG/UserInterface/OSGLabel.h>

// List header files
#include <OpenSG/UserInterface/OSGList.h>
#include <OpenSG/UserInterface/OSGDefaultListModel.h>
#include <OpenSG/UserInterface/OSGDefaultListSelectionModel.h>
#include <OpenSG/UserInterface/OSGListModel.h>

#include <OpenSG/UserInterface/OSGScrollPanel.h>
#include <OpenSG/UserInterface/OSGPanel.h>
#include <OpenSG/UserInterface/OSGLabel.h>
#include <OpenSG/UserInterface/OSGUIFont.h>
#include <OpenSG/UserInterface/OSGTextArea.h>
#include <OpenSG/UserInterface/OSGCellEditor.h>
#include <OpenSG/UserInterface/OSGComponentGenerator.h>

#include <OpenSG/UserInterface/OSGLayoutSpring.h>
#include <OpenSG/UserInterface/OSGSpringLayout.h>
#include <OpenSG/UserInterface/OSGSpringLayoutConstraints.h>

#include <sstream>


// Activate the OpenSG namespace
// This is not strictly necessary, you can also prefix all OpenSG symbols
// with OSG::, but that would be a bit tedious for this example
OSG_USING_NAMESPACE

// The SimpleSceneManager to manage simple applications
SimpleSceneManager *mgr;
bool ExitApp = false;
std::map<std::string, UIFontPtr> FontMap;

// Declare upfront so they can be referenced

// forward declaration so we can have the interesting stuff upfront
void display(void);
void reshape(Vec2f Size);

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
   }

   virtual void keyReleased(const KeyEvent& e)
   {
   }

   virtual void keyTyped(const KeyEvent& e)
   {
   }
};

// Setup a listener to change the label's font
// when a different item in the list is
// selected
class TypeListListener: public MouseAdapter
{
  public:
    virtual void mouseClicked(const MouseEvent& e)
    {
    }
};

class OpenSGTypePanel
{
public:

    class FCListListener: public ListSelectionListener
    {
      public:
        virtual void selectionChanged(const ListSelectionEvent& e)
        {
            if(!_List->getSelectionModel()->isSelectionEmpty())
            {
                std::string ValueStr("");
                SharedFieldPtr Value(_List->getValueAtIndex(_List->getSelectionModel()->getAnchorSelectionIndex()));
                if(Value->getType() == SFString::getClassType())
                {
                    ValueStr = dynamic_cast<SFString*>(Value.get())->getValue();
                }

                FieldContainerType* TheFCType = FieldContainerFactory::the()->findType(ValueStr.c_str());

                if(TheFCType != NULL)
                {
					std::stringstream OutputStream;

                    // Output selected font
                    OutputStream << "Field Container Type: " << TheFCType->getCName() << std::endl;
                    OutputStream << std::setw(25) << "Field Name" << " | " << std::setw(22) << "Type" << " | " << std::setw(11) << "Cardinality"  << " | " << std::setw(25) << "Default Value" << std::endl;
                    for(UInt32 i(1) ; i<TheFCType->getNumFieldDescs()+1 ; ++i)
                    {
                        FieldDescription* Desc = TheFCType->getFieldDescription(i);
                        if(!Desc->isInternal())
                        {
                            FieldType* TheField = FieldFactory::the().getFieldType(Desc->getTypeId());
                            OutputStream << std::setw(25) << Desc->getCName() << " | " ;
                            OutputStream << std::setw(22) << TheField->getContentType().getCName() << " | " ;
                            if(TheField->getCardinality() == FieldType::SINGLE_FIELD)
                            {
                                OutputStream << std::setw(11) << "Single"  << " | " ;
                            }
                            else
                            {
                                OutputStream << std::setw(11) << "Many"  << " | " ;
                            }

                                if(TheFCType->getPrototype() != NullFC &&
                                    TheFCType->getPrototype()->getField(Desc->getFieldId()) != NULL)
                                {
                                    std::string Value;
                                    TheFCType->getPrototype()->getField(Desc->getFieldId())->getValueByStr(Value, 0);
                                    OutputStream << std::setw(25) << Value;
                                }

                            OutputStream   << std::endl;
                        }
                    }
					beginEditCP(_TextArea, TextArea::TextFieldMask);
						_TextArea->setText(OutputStream.str());
					endEditCP(_TextArea, TextArea::TextFieldMask);
                }
            }
        }

        void setList(ListPtr TheList, TextAreaPtr TheTextArea)
        {
             _List = TheList;
             _TextArea = TheTextArea;
        }
    protected:
        ListPtr _List;
		TextAreaPtr _TextArea;
    };

protected:
	PanelPtr _MainPanel;
	DefaultListModelPtr _FieldContainerTypeModel;
    FCListListener TheFCListListener;
	TextAreaPtr FCDescriptionArea;

	PanelPtr createFieldContainerTypePanel(void)
	{
		//Put all the FieldContainerTypes into the model
		_FieldContainerTypeModel = DefaultListModel::create();
		UInt32 NumTypesFound(0);
		for (UInt32 i(0); NumTypesFound < FieldContainerFactory::the()->getNumTypes() ; ++i)
		{
			FieldContainerType* TheType;
			TheType = FieldContainerFactory::the()->findType(i);

            std::vector<FieldContainerType*> AllowedTypes;
            AllowedTypes.push_back(&Component::getClassType());
            AllowedTypes.push_back(&Border::getClassType());
            AllowedTypes.push_back(&UIBackground::getClassType());
            AllowedTypes.push_back(&UIFont::getClassType());
            AllowedTypes.push_back(&CellEditor::getClassType());
            AllowedTypes.push_back(&ComponentGenerator::getClassType());
			if(TheType != NULL)
			{
                for(std::vector<FieldContainerType*>::iterator Itor(AllowedTypes.begin()) ; Itor != AllowedTypes.end(); ++Itor)
                {
                    if(TheType->isDerivedFrom(*(*Itor)) )
                    {
				        _FieldContainerTypeModel->pushBack(SharedFieldPtr(new SFString(TheType->getCName())));
                    }
                }
				++NumTypesFound;
			}
		}

		// Create FieldContainerTypeList
		ListPtr FieldContainerTypeList = List::create();
		beginEditCP(FieldContainerTypeList, Component::PreferredSizeFieldMask | List::OrientationFieldMask | List::ModelFieldMask);
			FieldContainerTypeList->setPreferredSize( Vec2f (300, 300) );
			FieldContainerTypeList->setOrientation(List::VERTICAL_ORIENTATION);
			FieldContainerTypeList->setModel(_FieldContainerTypeModel);
		endEditCP(FieldContainerTypeList, Component::PreferredSizeFieldMask | List::OrientationFieldMask | List::ModelFieldMask);

		// Assign the Model, and SelectionModel
		// to the List
		// Creates and assigns a SelectionMode
		ListSelectionModelPtr  FieldSelectionModel(new DefaultListSelectionModel);
		FieldSelectionModel->setSelectionMode(DefaultListSelectionModel::SINGLE_SELECTION);
		FieldContainerTypeList->setSelectionModel(FieldSelectionModel);
        FieldContainerTypeList->getSelectionModel()->addListSelectionListener(&TheFCListListener);
		
		
		//FieldContainerTypeListScrollPanel
		ScrollPanelPtr FieldContainerTypeListScrollPanel = ScrollPanel::create();
		beginEditCP(FieldContainerTypeListScrollPanel, ScrollPanel::PreferredSizeFieldMask | ScrollPanel::HorizontalResizePolicyFieldMask);
			FieldContainerTypeListScrollPanel->setPreferredSize(Vec2f(400,400));
			FieldContainerTypeListScrollPanel->setHorizontalResizePolicy(ScrollPanel::RESIZE_TO_VIEW);
			//TheScrollPanel->setVerticalResizePolicy(ScrollPanel::RESIZE_TO_VIEW);
		endEditCP(FieldContainerTypeListScrollPanel, ScrollPanel::PreferredSizeFieldMask | ScrollPanel::HorizontalResizePolicyFieldMask);
		FieldContainerTypeListScrollPanel->setViewComponent(FieldContainerTypeList);

		//Number of FieldContainerTypes Label

		LabelPtr NumFCTypesLabel = Label::create();
		beginEditCP(NumFCTypesLabel, Label::TextFieldMask);
			NumFCTypesLabel->setText("Number Field Container Types: ");
		endEditCP(NumFCTypesLabel, Label::TextFieldMask);

		
		
		//Number of FieldContainerTypes Value Label
		LabelPtr NumFCTypesValueLabel = Label::create();
		std::stringstream TempSStream;
        TempSStream << _FieldContainerTypeModel->getSize();
		beginEditCP(NumFCTypesValueLabel, Label::TextFieldMask);
			NumFCTypesValueLabel->setText(TempSStream.str());
		endEditCP(NumFCTypesValueLabel, Label::TextFieldMask);

		//Field Container Description TextArea
		//Windows Font
		UIFontPtr TextAreaFont = UIFont::create();
		beginEditCP(TextAreaFont);
			TextAreaFont->setFamily("Courier New");
			TextAreaFont->setGap(3);
			TextAreaFont->setGlyphPixelSize(46);
			TextAreaFont->setSize(12);
			TextAreaFont->setTextureWidth(0);
			TextAreaFont->setStyle(TextFace::STYLE_PLAIN);
		endEditCP(TextAreaFont);

		FCDescriptionArea = TextArea::create();

		beginEditCP(FCDescriptionArea, TextArea::FontFieldMask);
		FCDescriptionArea->setFont(TextAreaFont);
		endEditCP(FCDescriptionArea, TextArea::FontFieldMask);

		//ScrollPanelPtr TextAreaScrollPanel = ScrollPanel::create();
		//TextAreaScrollPanel->setViewComponent(FCDescriptionArea);

        TheFCListListener.setList(FieldContainerTypeList, FCDescriptionArea);

		//Create Main Panel Layout
		SpringLayoutPtr FieldContainerTypePanelLayout = osg::SpringLayout::create();

		//Create Main Panel
		PanelPtr FieldContainerTypePanel = Panel::create();

		beginEditCP(FieldContainerTypePanel, Panel::ChildrenFieldMask | Panel::LayoutFieldMask);
			FieldContainerTypePanel->getChildren().push_back(FieldContainerTypeListScrollPanel);
			FieldContainerTypePanel->getChildren().push_back(NumFCTypesLabel);
			FieldContainerTypePanel->getChildren().push_back(NumFCTypesValueLabel);
			FieldContainerTypePanel->getChildren().push_back(FCDescriptionArea);
			FieldContainerTypePanel->setLayout(FieldContainerTypePanelLayout);
		endEditCP(FieldContainerTypePanel, Panel::ChildrenFieldMask | Panel::LayoutFieldMask);
        
		//Scrollbar Layout constraints
		FieldContainerTypePanelLayout->putConstraint(SpringLayoutConstraints::NORTH_EDGE, FieldContainerTypeListScrollPanel, 0, SpringLayoutConstraints::NORTH_EDGE, FieldContainerTypePanel);
		FieldContainerTypePanelLayout->putConstraint(SpringLayoutConstraints::HORIZONTAL_CENTER_EDGE, FieldContainerTypeListScrollPanel, 0, SpringLayoutConstraints::HORIZONTAL_CENTER_EDGE, FieldContainerTypePanel);
		
		//FieldContainerTypes Label Layout constraints
		FieldContainerTypePanelLayout->putConstraint(SpringLayoutConstraints::NORTH_EDGE, NumFCTypesLabel, 1, SpringLayoutConstraints::SOUTH_EDGE, FieldContainerTypeListScrollPanel);
		FieldContainerTypePanelLayout->putConstraint(SpringLayoutConstraints::WEST_EDGE, NumFCTypesLabel, 0, SpringLayoutConstraints::WEST_EDGE, FieldContainerTypeListScrollPanel);
		FieldContainerTypePanelLayout->putConstraint(SpringLayoutConstraints::EAST_EDGE, NumFCTypesLabel, -1, SpringLayoutConstraints::WEST_EDGE, NumFCTypesValueLabel);

		//FieldContainerTypes Label Layout constraints
		FieldContainerTypePanelLayout->putConstraint(SpringLayoutConstraints::NORTH_EDGE, NumFCTypesValueLabel, 1, SpringLayoutConstraints::SOUTH_EDGE, FieldContainerTypeListScrollPanel);
		FieldContainerTypePanelLayout->putConstraint(SpringLayoutConstraints::EAST_EDGE, NumFCTypesValueLabel, 0, SpringLayoutConstraints::EAST_EDGE, FieldContainerTypeListScrollPanel);
				
		//FieldContainer Description TextArea Layout constraints
		FieldContainerTypePanelLayout->putConstraint(SpringLayoutConstraints::NORTH_EDGE, FCDescriptionArea, 1, SpringLayoutConstraints::SOUTH_EDGE, NumFCTypesLabel);
		FieldContainerTypePanelLayout->putConstraint(SpringLayoutConstraints::EAST_EDGE, FCDescriptionArea, 0, SpringLayoutConstraints::EAST_EDGE, FieldContainerTypePanel);
		FieldContainerTypePanelLayout->putConstraint(SpringLayoutConstraints::WEST_EDGE, FCDescriptionArea, 0, SpringLayoutConstraints::WEST_EDGE, FieldContainerTypePanel);
		FieldContainerTypePanelLayout->putConstraint(SpringLayoutConstraints::SOUTH_EDGE, FCDescriptionArea, 0, SpringLayoutConstraints::SOUTH_EDGE, FieldContainerTypePanel);


		return FieldContainerTypePanel;
	}
public:
	PanelPtr getPanel(void) const
	{
		return _MainPanel;
	}

	OpenSGTypePanel()
	{
		
		_MainPanel = createFieldContainerTypePanel();
	}
};

// Initialize GLUT & OpenSG and set up the scene
int main(int argc, char **argv)
{
    // OSG init
    osgInit(argc,argv);

    // Set up Window
    WindowEventProducerPtr TheWindowEventProducer = createDefaultWindowEventProducer();
    WindowPtr MainWindow = TheWindowEventProducer->initWindow();
    
    TheWindowEventProducer->setDisplayCallback(display);
    TheWindowEventProducer->setReshapeCallback(reshape);

    //Add Window Listener
    TutorialWindowListener TheTutorialWindowListener;
    TheWindowEventProducer->addWindowListener(&TheTutorialWindowListener);
    TutorialKeyListener TheKeyListener;
    TheWindowEventProducer->addKeyListener(&TheKeyListener);

    // Make Main Scene Node
    NodePtr scene = osg::Node::create();
    beginEditCP(scene, Node::CoreFieldMask | Node::ChildrenFieldMask);
    {
        scene->setCore(osg::Group::create());
    }
    endEditCP  (scene, Node::CoreFieldMask | Node::ChildrenFieldMask);

	// Create the Graphics
	GraphicsPtr graphics = osg::Graphics2D::create();

	// Initialize the LookAndFeelManager to enable default settings
	LookAndFeelManager::the()->getLookAndFeel()->init();

	BorderLayoutConstraintsPtr OpenSGTypePanelConstraints = osg::BorderLayoutConstraints::create();
	beginEditCP(OpenSGTypePanelConstraints, BorderLayoutConstraints::RegionFieldMask);
		OpenSGTypePanelConstraints->setRegion(BorderLayoutConstraints::BORDER_CENTER);
	endEditCP(OpenSGTypePanelConstraints, BorderLayoutConstraints::RegionFieldMask);
	
    OpenSGTypePanel TheOpenSGTypePanel;
	beginEditCP(TheOpenSGTypePanel.getPanel(), Component::ConstraintsFieldMask);
		TheOpenSGTypePanel.getPanel()->setConstraints(OpenSGTypePanelConstraints);
	endEditCP(TheOpenSGTypePanel.getPanel(), Component::ConstraintsFieldMask);


    // Create The Main InternalWindow
    // Create Background to be used with the Main InternalWindow
    ColorUIBackgroundPtr MainInternalWindowBackground = osg::ColorUIBackground::create();
    beginEditCP(MainInternalWindowBackground, ColorUIBackground::ColorFieldMask);
        MainInternalWindowBackground->setColor(Color4f(1.0,1.0,1.0,0.5));
    endEditCP(MainInternalWindowBackground, ColorUIBackground::ColorFieldMask);

	BorderLayoutPtr MainInternalWindowLayout = osg::BorderLayout::create();

    InternalWindowPtr MainInternalWindow = osg::InternalWindow::create();
	beginEditCP(MainInternalWindow, InternalWindow::ChildrenFieldMask | InternalWindow::LayoutFieldMask | InternalWindow::BackgroundsFieldMask | InternalWindow::AlignmentInDrawingSurfaceFieldMask | InternalWindow::ScalingInDrawingSurfaceFieldMask | InternalWindow::DrawTitlebarFieldMask | InternalWindow::ResizableFieldMask);
	   MainInternalWindow->getChildren().push_back(TheOpenSGTypePanel.getPanel());
	   MainInternalWindow->setLayout(MainInternalWindowLayout);
       MainInternalWindow->setBackgrounds(MainInternalWindowBackground);
	   MainInternalWindow->setAlignmentInDrawingSurface(Vec2f(0.5f,0.5f));
	   MainInternalWindow->setScalingInDrawingSurface(Vec2f(1.0f,1.0f));
	   MainInternalWindow->setDrawTitlebar(false);
	   MainInternalWindow->setResizable(false);
    endEditCP(MainInternalWindow, InternalWindow::ChildrenFieldMask | InternalWindow::LayoutFieldMask | InternalWindow::BackgroundsFieldMask | InternalWindow::AlignmentInDrawingSurfaceFieldMask | InternalWindow::ScalingInDrawingSurfaceFieldMask | InternalWindow::DrawTitlebarFieldMask | InternalWindow::ResizableFieldMask);

	//Create the Drawing Surface
	UIDrawingSurfacePtr TutorialDrawingSurface = UIDrawingSurface::create();
	beginEditCP(TutorialDrawingSurface, UIDrawingSurface::GraphicsFieldMask|UIDrawingSurface::EventProducerFieldMask);
		TutorialDrawingSurface->setGraphics(graphics);
	    TutorialDrawingSurface->setEventProducer(TheWindowEventProducer);
    endEditCP  (TutorialDrawingSurface, UIDrawingSurface::GraphicsFieldMask|UIDrawingSurface::EventProducerFieldMask);
	
	TutorialDrawingSurface->openWindow(MainInternalWindow);

	// Create the UI Foreground Object
	UIForegroundPtr foreground = osg::UIForeground::create();

	beginEditCP(foreground, UIForeground::DrawingSurfaceFieldMask);
	    foreground->setDrawingSurface(TutorialDrawingSurface);
    endEditCP  (foreground, UIForeground::DrawingSurfaceFieldMask);
 
    // create the SimpleSceneManager helper
    mgr = new SimpleSceneManager;

    // tell the manager what to manage
    mgr->setWindow(MainWindow );
    mgr->setRoot  (scene);

	// Add the UI Foreground Object to the Scene
	ViewportPtr viewport = mgr->getWindow()->getPort(0);
    beginEditCP(viewport, Viewport::ForegroundsFieldMask);
		viewport->getForegrounds().push_back(foreground);
    beginEditCP(viewport, Viewport::ForegroundsFieldMask);

    // show the whole scene
    mgr->showAll();

    TheWindowEventProducer->openWindow(Pnt2f(0,0),
                                        Vec2f(1280,1024),
                                        "OpenSG 51OpenSGFieldContainers Window");

    //Main Event Loop
    while(!ExitApp)
    {
        TheWindowEventProducer->update();
        TheWindowEventProducer->draw();
    }
    osgExit();

    return 0;
}

// redraw the window
void display(void)
{
    mgr->redraw();
}

// react to size changes
void reshape(Vec2f Size)
{
    mgr->resize(Size.x(), Size.y());
}