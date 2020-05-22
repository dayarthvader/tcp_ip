# cpp_project_starter  
Skeletal framework for a new c++ project.  
Details  
1. cpp source tree structure, designed based on my past projects. In principle, my projects are library oriented.
  Do review the source tree once to suite your architecture before forking the repo.  
  ```
cpp_project_starter/
├── cmake # Tools specific configuration (static_analysis tools, dependency management tools)
│   └── sanitizer.cmake # example
├── cpp
│   ├── .clang-format  # Makes sense to make styleguide formatter part of the project of everyone's use
│   ├── CMakeLists.txt # Main CMake file
│   ├── include
│   │   └── cpp_project_starter_lib
│   │       └── cpp_project_starter.h # Public APIs headers only
│   ├── src
│   │   ├── cpp_project_starter_lib # Private header files can go in the same directory
│   │   │   └── cpp_project_starter.cpp
│   │   └── main
│   │       └── main.cpp
│   ├── test
│   │   └── cpp_project_starter_test.cpp
│   └── third_party # Third party libraries (source or binaries)
├── package # Package scripts for delivery of application (dpkg/rpm etc ...)
├── README.md 
└── scripts #Automation/startup scripts
```
