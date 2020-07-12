# ========================================================
# Copyright (c) 2020 Gabriel Schmitz. All rights reserved.
# ========================================================

cmake_minimum_required( VERSION 3.16 )
project( native_message_box )
set( CMAKE_CXX_STANDARD 14 )


# =======
# WINDOWS
# =======

if( WIN32 )

    message( STATUS "Platform: Windows" )


# =====
# MACOS
# =====

elseif( APPLE )

    message( STATUS "Platform: MacOS" )

    find_library( CORE_FOUNDATION_LIBRARY CoreFoundation )
    if (NOT CORE_FOUNDATION_LIBRARY)
        message( FATAL_ERROR ": Framework CoreFoundation not found" )
    else()
        message( STATUS "CoreFoundation: ${CORE_FOUNDATION_LIBRARY}" )
        link_libraries( ${CORE_FOUNDATION_LIBRARY} )
    endif()


# =====
# LINUX
# =====

elseif( UNIX )

    message( STATUS "Platform: Linux" )

    FIND_PACKAGE( PkgConfig REQUIRED)
    PKG_CHECK_MODULES( GTK REQUIRED gtk+-3.0 )
    INCLUDE_DIRECTORIES(${GTK_INCLUDE_DIRS})
    LINK_DIRECTORIES(${GTK_LIBRARY_DIRS})
    ADD_DEFINITIONS(${GTK_CFLAGS_OTHER})
    link_libraries( ${GTK_LIBRARIES} )


# ===========
# UNSUPPORTED
# ===========

else()

    message( FATAL_ERROR "Platform: Not supported" )

endif()


# ===================
# EXAMPLE APPLICATION
# ===================

add_executable( native_message_box_example example/main.cpp )
target_include_directories( native_message_box_example PRIVATE include )
