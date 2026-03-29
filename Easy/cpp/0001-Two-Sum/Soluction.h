#ifndef TWOSUM_SOLUCTION_H
#define TWOSUM_SOLUCTION_H

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> result;
        bool isFound = false;
        while (!isFound) {
            for (int i = 0; i < nums.size(); i++) {
                for (int j = i + 1; j < nums.size(); j++) {
                    if (nums[i] + nums[j] == target) {
                        isFound = true;
                        result.push_back(i);
                        result.push_back(j);
                        return result;
                    }
                }
            }
        }
    }
};


#endif //TWOSUM_SOLUCTION_H