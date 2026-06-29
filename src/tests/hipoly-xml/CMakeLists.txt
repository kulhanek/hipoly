# ==============================================================================
# HiPoLy CMake File
# ==============================================================================

# program objects --------------------------------------------------------------
SET(TEST_XML_SRC
        test_xml.cpp
        )

# final build ------------------------------------------------------------------
ADD_EXECUTABLE(hipoly-xml ${TEST_XML_SRC})
ADD_DEPENDENCIES(hipoly-xml hipoly_shared)
TARGET_LINK_LIBRARIES(hipoly-xml ${QT_LIBS} hipoly)


