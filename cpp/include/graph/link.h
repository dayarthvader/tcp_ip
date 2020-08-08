// Copyright [2020] Dayarthvader
#ifndef CPP_INCLUDE_GRAPH_LINK_H_
#define CPP_INCLUDE_GRAPH_LINK_H_
#include <cstdint>
#include <vector>

#include "common/tcp_ip_errors.h"
using common_ns::TcpIpError;

class Interface;
namespace graph_ns {
class Link {
 public:
  explicit Link(uint32_t cost) : cost_(cost) {}
  void Connect(Interface* interfaces_1, Interface* interfaces_2) {
    interfaces_1_ = interfaces_1;
    interfaces_2_ = interfaces_2;
  }
  uint32_t Cost() { return cost_; }

 private:
  uint32_t cost_{0};
  Interface* interfaces_1_{nullptr};
  Interface* interfaces_2_{nullptr};
  };
  }     // namespace graph_ns
#endif  //  CPP_INCLUDE_GRAPH_LINK_H_
