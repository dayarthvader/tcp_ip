#include "graph/node.h"

#include <memory>

#include "graph/interface.h"
#include "graph/link.h"
#include "gtest/gtest.h"

namespace {
TEST(NodeTest, MaxInterfaces) {
  graph_ns::Node node(std::string("test"), 3);
  std::unique_ptr<graph_ns::Link> link = std::make_unique<graph_ns::Link>(1);
  EXPECT_EQ(TcpIpError::TCP_IP_SUCCESS, node.ConnectLink(link.get()));
  EXPECT_EQ(TcpIpError::TCP_IP_SUCCESS, node.ConnectLink(link.get()));
  EXPECT_EQ(TcpIpError::TCP_IP_SUCCESS, node.ConnectLink(link.get()));
  EXPECT_EQ(TcpIpError::TCP_IP_FAIL, node.ConnectLink(link.get()));
}
}  // namespace
