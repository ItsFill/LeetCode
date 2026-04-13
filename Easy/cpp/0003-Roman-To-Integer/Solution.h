#ifndef ROMANTOINT_SOLUTION_H
#define ROMANTOINT_SOLUTION_H
#include <map>

class Solution {
public:
    int romanToInt(std::string s) {
        std::map<char, int> romanMap = {{'I', 1}, {'V', 5},
                                        {'X', 10}, {'L', 50},
                                        {'C', 100}, {'D', 500},
                                        {'M', 1000}};
        int sum = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() && romanMap[s[i]] < romanMap[s[i + 1]]) {
                sum -= romanMap[s[i]];
            } else {
                sum += romanMap[s[i]];
            }
        }
        return sum;
    }
};

#endif //ROMANTOINT_SOLUTION_H