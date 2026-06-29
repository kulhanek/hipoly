# ==============================================================================
# HiPoLy CMake File
# ==============================================================================

# program objects --------------------------------------------------------------
SET(TEST_XML_SRC
        test_uuid.cpp
        )

# final build ------------------------------------------------------------------
ADD_EXECUTABLE(hipoly-uuidgen ${TEST_XML_SRC})
ADD_DEPENDENCIES(hipoly-uuidgen hipoly_shared)
TARGET_LINK_LIBRARIES(hipoly-uuidgen ${QT_LIBS} hipoly)

