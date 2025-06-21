class Solution {
public:
//besy Tc approach is that The largest power of 3 within the 32-bit integer range is ( 3^{19} = 1162261467 ) hence if big no. % 3 == 0 then true 
    bool isPowerOfThree(int n) {
        return n > 0 && 1162261467 % n == 0;
    }
};