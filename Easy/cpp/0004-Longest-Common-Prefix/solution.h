#ifndef LONGESTCOMMONPREFIX__SOLUTION_H
#define LONGESTCOMMONPREFIX__SOLUTION_H

#include <vector>
#include <string>

class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        std::string result = strs.at(0);
        for (auto it = strs.begin(); it != strs.end(); ++it) {
            std::string temp = "";
            for (int i = 0; i < result.length() && i < it->length(); ++i) {
                if (it->at(i) == result.at(i)) {
                    temp += it->at(i);
                } else {
                    break;
                }
            }
            result = temp;

            if (result.empty()) return "";
        }
        return result;
    }
};

#endif //LONGESTCOMMONPREFIX__SOLUTION_H