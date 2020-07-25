// Copyright [2020] Dayarthvader
#ifndef CPP_INCLUDE_GRAPH_NODE_H_
#define CPP_INCLUDE_GRAPH_NODE_H_
#include <string>
#include <vector>

class Interface;
namespace graph_ns {
class Node {
 public:
  explicit Node();

 private:
  std::string name_{""};
  std::vector<Interface*> interfaces_;
};
}  //  namespace graph_ns
#endif  //  CPP_INCLUDE_GRAPH_NODE_H_
