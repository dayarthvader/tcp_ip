#include "graph/interface.h"
using graph_ns::Interface;
#include "gtest/gtest.h"
namespace {
TEST(InterfaceTest, Defaults) {
  Interface intf("test", nullptr);
  EXPECT_EQ(false, intf.Disabled());
  EXPECT_EQ(false, intf.Connected());
  EXPECT_EQ(nullptr, intf.OwningNode());
}
}  //  namespace
