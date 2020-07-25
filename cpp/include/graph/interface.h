// Copyright [2020] Dayarthvader
#ifndef CPP_INCLUDE_GRAPH_INTERFACE_H_
#define CPP_INCLUDE_GRAPH_INTERFACE_H_
#include <string>

class Node;
class Link;

namespace graph_ns {
class Interface {
 public:
  explicit Interface(const std::string& name);  //  why explicit? Go figure!
  void SetOwningNode(Node* node);
  void SetConnectedLink(Link* link);
  Node* OwningNode();
  Link* OwningLink();

 private:
  std::string name_{""};
  Node* owning_node_{nullptr};
  Link* connected_link_{nullptr};
};
}  // namespace graph_ns
#endif  // CPP_INCLUDE_GRAPH_INTERFACE_H_
