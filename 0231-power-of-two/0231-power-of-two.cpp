class Solution {
public:
//BEST OUT OF 8 METHODS EASY TO UNDERSTAND AND NOT HACKABLE CODE WITH O(1),O(N)
/* firsly all no. > 0
Use of & operator: It compares each bit of two numbers and returns 1 only if both bits are 1, otherwise it returns 0
   {eg: n = 5  → 0101 (binary)
       n-1 = 4 → 0100 (binary)
       n & (n-1) → 0101 & 0100 = 0100 
       this new bin 0100 is x that is 4 in integer form}
this convert into binary no. x and if x has bits 0000 then only true(relation with 2^a)
*/
    bool isPowerOfTwo(int n) {
        return (n > 0 && (n & (n - 1)) == 0) ? true : false;
    }
};