<<<<<<< HEAD
# Install script for directory: C:/Users/clems/Documents/CSC MINES/Final_Project
=======
# Install script for directory: C:/Users/Christian/Documents/GitHub/Mines_261/Final_Project
>>>>>>> f199d3c2b6559bbf9163690e538863328f727174

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/Final_Project")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
<<<<<<< HEAD
file(WRITE "C:/Users/clems/Documents/CSC MINES/Final_Project/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
=======
file(WRITE "C:/Users/Christian/Documents/GitHub/Mines_261/Final_Project/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
>>>>>>> f199d3c2b6559bbf9163690e538863328f727174
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
