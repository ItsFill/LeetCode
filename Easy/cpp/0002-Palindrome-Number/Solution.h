#ifndef ISPALINDROMENUM_SOLUTIONB_H
#define ISPALINDROMENUM_SOLUTIONB_H

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || x % 10 == 0 && x != 0) return false;

        int lastNum = 0;

        while (x > lastNum) {
            lastNum = lastNum * 10 + x % 10;
            x /= 10;
        }
        return x == lastNum || x == lastNum / 10;
    }
};

#endif //ISPALINDROMENUM_SOLUTIONB_H