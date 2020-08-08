// Copyright [2020] Dayarthvader
#include "graph/node.h"

#include <memory>
#include <string>

#include "graph/interface.h"
#include "graph/link.h"

// using graph_ns::Interface;
// using graph_ns::Link;
graph_ns::Node::Node(const std::string& name, uint8_t num_of_interface)
    : name_(name), num_of_interface_(num_of_interface) {
  for (int i = 0; i < num_of_interface; i++) {
    interfaces_.emplace_back(new graph_ns::Interface(std::string("1"), this));
  }
}

graph_ns::Node::~Node() {
  for (decltype(interfaces_.size()) i = 0; i < interfaces_.size(); i++) {
    delete interfaces_[i];
  }
}

TcpIpError graph_ns::Node::ConnectLink(Link* link) {
  for (decltype(interfaces_.size()) i = 0; i < interfaces_.size(); i++) {
    if (!interfaces_[i]->Connected()) {
      interfaces_[i]->Connect(link);
      return TcpIpError::TCP_IP_SUCCESS;
    }
  }
  return TcpIpError::TCP_IP_FAIL;
}
