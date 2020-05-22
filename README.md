# cpp_project_starter  
Skeletal framework for a new c++ project.  
Details  
1. cpp source tree structure, designed based on my past projects. In principle, my projects are library oriented.
  Do review the source tree once to suite your architecture before forking the repo.
   project
   |--cpp
   |  |--src
   |  |  |--main
   |  |  |  |--main.cpp
   |  |	 |  |--CMakeLists.txt  #build commands for the application
   |  |  |--<lib_1>
   |  |  |  |--*.cpp
   |  |	 |  |--*.h   #Private headers
   |  |	 |  |--CMakeLists.txt
   |  |  |--<lib_2>
   |  |  |  |--*.cpp
   |  |	 |  |--*.h
   |  |  |  |--CMakeLists.txt
   |  |--include
   |  |  |--<lib_1>
   |  |  |  |--*.h  #Public interfaces for clients (libraries/applications)
   |  |--third_party
   |  |  |--lib_1
   |  |  |--lib_2
   |  |--test
   |  |  |--*_test.cpp
   |  |  |--CMakeLists.txt
   |--cmake
   |  |--*.cmake #tools specific configuration and options (sanitizers, conan etc ...)
   |  |--CMakeLists.txt #Main cmake file for the project
   |  |--.clang-format  --> It's best to make clang-format part of the project as collaborators can easily use it before submitting pull request
   |--package
   |  |--packaging_scripts(debian/rpm etc ..)
   |--scripts
   |  |--automation/installation scripts
