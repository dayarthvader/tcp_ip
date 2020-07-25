// Copyright [2020] Dayarthvader
#ifndef CPP_INCLUDE_GRAPH_INTERFACE_H_
#define CPP_INCLUDE_GRAPH_INTERFACE_H_
#include <string>

#include "util/tcp_ip_errors.h"
using util_ns::tcp_ip_errors;

namespace graph_ns {
class Interface {
 public:
  explicit Interface(const std::string& name);  //  why explicit? Go figure!
  tcp_ip_errors Connect(int link_id);           // Todo After StatusOr
 private:
  std::string name_{""};
  bool connected_{false};
  int link_id{-1};
};
}  // namespace graph_ns
#endif  // CPP_INCLUDE_GRAPH_INTERFACE_H_
