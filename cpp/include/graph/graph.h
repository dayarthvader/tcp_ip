// Copyright [2020] Dayarthvader
#ifndef CPP_INCLUDE_GRAPH_GRAPH_H_
#define CPP_INCLUDE_GRAPH_LINK_H_
#include <memory>

#include "common/tcp_ip_errors.h"
#include "node.h"

using common_ns::TcpIpError;
using graph_ns::Node;
namespace graph_ns {
class Graph {
 public:
  Graph();
  ~Graph();
  Graph(const Graph&) = delete;
  Graph(Graph&&) = delete;
  Graph& operator=(const Graph&) = delete;
  Graph& operator=(Graph&&) = delete;
  TcpIpError LinkNodes(Node* node1, Node* node2, const std::string& if_name1,
                       const std::string if_name2, uint8_t cost);
  void print_graph();

 private:
  std::string topology_name_{""};
  std::vector<std::unique_ptr<Node>> nodes_;
};
}  //  namespace graph_ns
#endif                 //  CPP_INCLUDE_GRAPH_LINK_H_
