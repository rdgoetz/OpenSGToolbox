MACRO(OSG_CONFIGURE_ODE)

    IF(OSG_USE_OSGSUPPORT_LIBS AND WIN32)

        IF(EXISTS ${OSG_SUPPORT_ROOT}/inc/fmod.h)
            SET(ODE_INCLUDE_DIR ${OSG_SUPPORT_ROOT}/include CACHE PATH "" FORCE)
        ENDIF()

        IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/osgfmodex.lib)
            SET(ODE_LIBRARY_RELEASE ${OSG_SUPPORT_ROOT}/lib/osgode.lib)
        ENDIF()
        IF(EXISTS ${OSG_SUPPORT_ROOT}/lib/osggdalD.lib)
            SET(ODE_LIBRARY_DEBUG ${OSG_SUPPORT_ROOT}/lib/osgodeD.lib)
        ENDIF()

        IF(ODE_INCLUDE_DIR)
          IF(ODE_LIBRARY_DEBUG OR ODE_LIBRARY_RELEASE)
            SET(ODE_FOUND TRUE)
          ENDIF()
        ENDIF()

        IF(ODE_FOUND)
          OSG_ADD_IMPORT_LIB(OSG_ODE_TARGETS ODE_LIBRARY)
          SET(ODE_LIBRARIES ${OSG_ODE_TARGETS} CACHE STRING "" FORCE)
        ENDIF(ODE_FOUND)

    ENDIF(OSG_USE_OSGSUPPORT_LIBS AND WIN32)

    IF(NOT OSG_USE_OSGSUPPORT_LIBS OR NOT ODE_FOUND)
        OSG_FIND_PACKAGE(ODE)
    ENDIF(NOT OSG_USE_OSGSUPPORT_LIBS OR NOT ODE_FOUND)

    IF(ODE_FOUND)
        OSG_SET(OSG_WITH_ODE 1)
    ENDIF(ODE_FOUND)

ENDMACRO(OSG_CONFIGURE_ODE)
