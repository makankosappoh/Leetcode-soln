class Solution {
public:
//trick formula: 1 + (n-1)%9
//27 → 2 + 7 = 9 → formula gives: 1 + (27 - 1) % 9 = 1 + 26 % 9 = 1 + 8 = 9 
    int addDigits(int num) {
        return (num == 0) ? 0 : 1 + (num - 1) % 9;
    }
};