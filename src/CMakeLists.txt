file(GLOB_RECURSE TRILOGY_SDK_SOURCES *.cpp)
target_sources(TrilogySDK
    PRIVATE
        ${TRILOGY_SDK_SOURCES}
)