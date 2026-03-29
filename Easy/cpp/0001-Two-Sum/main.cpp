#include <format>
#include <iostream>
#include <vector>
#include "Soluction.h"

int main() {
    Solution s;
    std::vector<int> nums = {3, 2, 4};
    int target = 6;
    std::vector<int> result = s.twoSum(nums, target);
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }
}