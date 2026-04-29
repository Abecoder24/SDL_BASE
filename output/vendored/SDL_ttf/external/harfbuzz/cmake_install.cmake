# Install script for directory: /Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set path to fallback-tool for dependency-resolution.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/harfbuzz" TYPE FILE FILES
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-aat-layout.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-aat.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-blob.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-buffer.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-common.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-cplusplus.hh"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-deprecated.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-draw.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-face.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-font.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-map.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-ot-color.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-ot-deprecated.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-ot-font.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-ot-layout.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-ot-math.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-ot-meta.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-ot-metrics.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-ot-name.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-ot-shape.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-ot-var.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-ot.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-paint.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-set.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-shape-plan.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-shape.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-style.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-unicode.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-version.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-ft.h"
    "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/vendored/SDL_ttf/external/harfbuzz/src/hb-coretext.h"
    )
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
if(CMAKE_INSTALL_LOCAL_ONLY)
  file(WRITE "/Users/abrahamkonate/Documents/C_executable_Code/SDL_BASE/output/vendored/SDL_ttf/external/harfbuzz/install_local_manifest.txt"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
endif()
