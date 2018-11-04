
#include "ros/ros.h"

#include "gtest/gtest.h"


TEST(TestSuite, test_case_1) {

  EXPECT_EQ(3, 3);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}
