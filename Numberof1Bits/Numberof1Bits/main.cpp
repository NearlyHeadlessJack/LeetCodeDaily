/*
Numberof1Bits
by N.H.J.
2021.3.22
Ver.1
*/

class Solution {
public:
    int hammingWeight(uint32_t n) {
        return __builtin_popcount(n);
    }
};

