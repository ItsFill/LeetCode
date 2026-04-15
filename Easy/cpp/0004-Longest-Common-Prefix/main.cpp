#include <iostream>
#include "solution.h"
#include <string>
#include <vector>

int main() {
    Solution s;
    std::vector<std::string> strs{"flower","flow","flight"};
    std::cout << s.longestCommonPrefix(strs) << std::endl;
    return 0;
}