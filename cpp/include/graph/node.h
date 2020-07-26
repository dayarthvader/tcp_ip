// Copyright [2020] Dayarthvader
#ifndef CPP_INCLUDE_GRAPH_NODE_H_
#define CPP_INCLUDE_GRAPH_NODE_H_
#include <memory>
#include <string>
#include <vector>

#include "common/tcp_ip_errors.h"
using common_ns::TcpIpError;

class Interface;
class Link;
namespace graph_ns {
class Node {
 public:
  Node(const std::string& name, const uint8_t num_of_interface);
  void AddInterface(const std::string& if_name);
  TcpIpError ConnectLink(const std::string& if_name, Link* link);
  TcpIpError ConnectedLink(const std::string& if_name, Link& link);

 private:
  std::string name_{""};
  std::vector<std::unique_ptr<Interface>> interfaces_;
};
}  //  namespace graph_ns
#endif  //  CPP_INCLUDE_GRAPH_NODE_H_
