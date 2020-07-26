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
  Link(Interface* interfaces_1, Interface* interfaces_2, uint32_t cost);
  TcpIpError Connect(Interface* interfaces_1, Interface interfaces_2);

 private:
  void SetInterface1(Interface* interfaces_1);
  void SetInterface2(Interface* interfaces_2);
  Interface* interfaces_1_{nullptr};
  Interface* interfaces_2_{nullptr};
  uint32_t cost_{0};
  };
  }     // namespace graph_ns
#endif  //  CPP_INCLUDE_GRAPH_LINK_H_
