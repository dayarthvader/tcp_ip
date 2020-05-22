# cpp_project_starter  


## Skeletal framework for new c++ projects.  
I wanted to make ready framework for all of my future C++ projects. This repo should serve and hopefully others who'd like to build c++ libraries and applications. I'm of the belief that the following 6 aspects of your future project must be well set right at the onset even before you write your first line of code. 

## Source tree structure
I attach a lot of significance to how I structure the source tree. Ideally the source structure should reflect software architecture. Advantages of well desinged source tree structure being :  
[x] Intuitive code browsing -  
[x] Predictability - 
[x] Tranparency - 
[x] Maintainibility -  
[x] Automation tools integration -

You can fork this repo to get a headstart in your new C++ projects if you chose  
[x] Details.1. As your folder structure.
[x] CMake as your build support tool.  
[x] google-style-guide as your coding style-guide  
[x] googletest and googlemock as your unit test framework  
[x] spdlog as logging framework  
[x] *experimental* statusor as a error handling model -- This is new model I am trying.  
  
## Details
1. cpp source tree structure, designed based on my past projects. In principle, my projects are library oriented.  
Do review the source tree once to suite your architecture before forking the repo. This is not one structure fits all solution as the ease of usage varies widely based on the language of implementation, domain, architecture etc ...This template may not be suitable for upcoming C++20 based projects as we'd like to move to modules then.

Below is the source tree structure that I am comfortable with.
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
# Todo
- [ ] Update .clang-format as per google style guide
- [ ] Update Main CMakeLists.txt to provide basic skeleton
