#ifndef VALIDPARENTHESES_SOLUTION_H
#define VALIDPARENTHESES_SOLUTION_H

#include <string>
#include <stack>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> stack;
        for (auto c : s) {
            if (c == '(' || c == '[' || c == '{') {
                stack.push(c);
            } else if (!stack.empty()) {
                if (c == ')' && stack.top() == '(') {
                    stack.pop();
                } else if (c == ']' && stack.top() == '[') {
                    stack.pop();
                }
                else if (c == '}' && stack.top() == '{') {
                    stack.pop();
                }
                else {
                    return false;
                }
            } else {
                return false;
            }
        }
        return stack.empty();
    }
};

#endif //VALIDPARENTHESES_SOLUTION_H