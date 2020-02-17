#include "solution.h"

int Solution::GetIth(std::vector<int> inputs, int i)
{
  if(i > inputs.size())
  return -1;
  std::make_heap(inputs.begin(), inputs.end());
  for(; i > 1; i--)
  {
    std::pop_heap(inputs.begin(), inputs.end());
    inputs.pop_back();
  }

  return inputs.front();
}

