// Copyright [2020] Dayarthvader
#ifndef CPP_INCLUDE_GRAPH_INTERFACE_H_
#define CPP_INCLUDE_GRAPH_INTERFACE_H_
#include <string>

namespace graph {
class Interface {
 public:
  explicit Interface(const std::string& name);  //  why explicit? Go figure!
  Connect(int link_id);                         // Todo After StatusOr
 private:
  std::string name_{""};
  bool connected_{false};
  int link_id{-1};
};
}  //  namespace graph
#endif  // CPP_INCLUDE_GRAPH_INTERFACE_H_
