cmake_minimum_required(VERSION 3.16)

#set(CMAKE_EXPORT_COMPILE_COMMANDS true)
set(CMAKE_CXX_STANDARD 17)

include(FetchContent)

FetchContent_Declare(
    Corrosion
    GIT_REPOSITORY https://github.com/corrosion-rs/corrosion.git
    #GIT_TAG master # Optionally specify a commit hash, version tag or branch here
)
FetchContent_MakeAvailable(Corrosion)


corrosion_import_crate(MANIFEST_PATH rustlib/Cargo.toml)
corrosion_add_cxxbridge(rust_bridge CRATE rustlib MANIFEST_PATH rustlib FILES lib.rs)

qt_add_library(QmlRustItem STATIC)

qt_add_qml_module(QmlRustItem
    URI QmlRustItem
    VERSION 1.0
    #QML_FILES
    SOURCES 
    qmlrustitem.cpp qmlrustitem.h
)

target_link_libraries(QmlRustItem
    PUBLIC rust_bridge
    PRIVATE Qt6::Quick
)
