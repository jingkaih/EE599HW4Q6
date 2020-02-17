#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::vector<int> input = {4,13,5,21,2,1};
    std::cout << solution.GetIth(input, 6) << std::endl;

    return EXIT_SUCCESS;
}