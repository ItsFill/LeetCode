#include <iostream>
#include "Solution.h"

int main() {
    Solution s;
    std::string text = "[({{}})]][]()";
    std::cout << s.isValid(text) << std::endl;
    return 0;
}