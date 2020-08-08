// Copyright [2020] Dayarthvader
#ifndef CPP_INCLUDE_GRAPH_INTERFACE_H_
#define CPP_INCLUDE_GRAPH_INTERFACE_H_
#include <string>

class Node;
class Link;

namespace graph_ns {
class Interface {
 public:
  // owning_node can be nullptr as it is allowed to as per design to re-seat an
  // interface to a different node
  Interface(const std::string& name, const Node* owning_node)
      : name_(name), owning_node_(owning_node) {}
  void Connect(const Link* link) { connected_link_ = link; };
  bool Connected() { return !(connected_link_ == nullptr); }
  void Disable() { disabaled_ = true; }
  bool Disabled() { return disabaled_; }
  const Node* OwningNode() { return owning_node_; }

 private:
  std::string name_{""};
  bool disabaled_{false};  //  enabled by default
  const Node* owning_node_{nullptr};
  const Link* connected_link_{
      nullptr};  //  if (connected_link_ == nullptr) interface is not connected
};
}  // namespace graph_ns
#endif  // CPP_INCLUDE_GRAPH_INTERFACE_H_
