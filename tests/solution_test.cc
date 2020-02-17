#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(GetIthShould, ReturnIthLargest) {
  Solution solution;
  std::vector<int> input = {4,13,5,21,2,1};
  int actual = solution.GetIth(input, 2);
  int expected = 13;
  EXPECT_EQ(expected, actual);
}

TEST(GetIthShould, ReturnNegativeOne) {
  Solution solution;
  std::vector<int> input = {4,13,5,21,2,1};
  int actual = solution.GetIth(input, 9);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}