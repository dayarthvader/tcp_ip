add_executable(tcp_ip_test "${PROJECT_SOURCE_DIR}/external/googletest/googletest/src/gtest_main.cc" 
	                    interface_test.cpp node_test.cpp link_test.cpp)
target_link_libraries(tcp_ip_test  graph gtest)
