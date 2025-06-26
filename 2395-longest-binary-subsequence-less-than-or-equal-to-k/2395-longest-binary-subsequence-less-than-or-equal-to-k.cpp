class Solution {
public:
//s bin string , integerk return length of longest subsequence of s as binary no. less than equal to k
//approahc is include as many 0s as they contribute nothing but increase length
//for 1 we include it only if its contribution keeps total value within k.  power of two based on its position among chosen bits.
    int longestSubsequence(string s, int k) {
        int subsq = 0; // subsequence so far
        long long val = 0;// current numeric value 
//The Least Significant Bit (LSB) in a binary number is the rightmost bit, representing the smallest power of 2 (2^0 or 1) so itterate from right side 
        for(int i = s.size() - 1; i >= 0; --i){
            char c = s[i];
            if(c == '0') subsq++; // 0 continue adding 
//if 1 encounter first cehck wthin safe boundry 32 bits shift
//Assigns val = 2^subsq, and only proceeds if this value is less than or equal to k
            else if(subsq < 31 && val + (1LL << subsq) <= k){
                val += 1LL << subsq; //it adds another 2^subsq to val
                subsq++;//increments subsq to try the next power of 2 in the next iteration.
            }
        }
        return subsq;
    }
};