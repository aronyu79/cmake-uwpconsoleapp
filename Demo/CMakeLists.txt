set(SOURCES "source/main.cpp")

set(CONTENT_FILES "assets/Package.appxmanifest")
file(GLOB_RECURSE PATHED_ICON_FILES "assets/icons/*.png")
foreach(PATHED ${PATHED_ICON_FILES})
    list(APPEND CONTENT_FILES ${PATHED})
endforeach()
list(APPEND CONTENT_FILES "assets/TemporaryKey.pfx")

set_property(SOURCE ${CONTENT_FILES} PROPERTY VS_DEPLOYMENT_CONTENT 1)

# Add executable called "helloDemo"
add_executable (helloDemo ${SOURCES} ${CONTENT_FILES})

# Link the executable to the Hello library. Since the Hello library has
# public include directories we will use those link directories when building
# helloDemo
target_link_libraries (helloDemo LINK_PUBLIC Hello)