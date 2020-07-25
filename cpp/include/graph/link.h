// Copyright [2020] Dayarthvader
#ifndef CPP_INCLUDE_GRAPH_LINK_H_
#define CPP_INCLUDE_GRAPH_LINK_H_
#include <vector>
class Interface;
namespace graph_ns {
class Link {
 public:
  Link();
 private:
  Interface* interfaces_1_;
  Interface* interfaces_2_;
  unsigned int cost_;
  };
  }     // namespace graph_ns
#endif  //  CPP_INCLUDE_GRAPH_LINK_H_
