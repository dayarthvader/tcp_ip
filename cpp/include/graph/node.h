// Copyright [2020] Dayarthvader
#ifndef CPP_INCLUDE_GRAPH_NODE_H_
#define CPP_INCLUDE_GRAPH_NODE_H_
#include <memory>
#include <string>
#include <vector>

#include "common/tcp_ip_errors.h"
using common_ns::TcpIpError;

namespace graph_ns {
class Interface;
class Link;
}  // namespace graph_ns
namespace graph_ns {
class Node {
 public:
  Node(const std::string& name, uint8_t num_of_interface);
  ~Node();
  TcpIpError ConnectLink(Link* link);  //  find an empty interface and connect
                                       //  link to that interface, return error
                                       //  if no free interface present

 private:
  std::string name_{""};
  uint8_t num_of_interface_{0};
  std::vector<graph_ns::Interface*> interfaces_;
};
}  //  namespace graph_ns
#endif  //  CPP_INCLUDE_GRAPH_NODE_H_
