#include "graph/link.h"

#include "graph/interface.h"
#include "gtest/gtest.h"

namespace {
TEST(LinkTest, Connect) {
  graph_ns::Link link(1);
  EXPECT_EQ(1, link.Cost());
}
}  // namespace
