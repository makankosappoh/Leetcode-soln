class Solution {
public:
//firstly use of unordered map to calcluate frequency of no. of lowercase alaphbets and count freq of each aplbhabet using mp[ch]++

//initialize counter c to calculate oddcounts of frq of chars bcz even freq char can be mirrored already palindrom while we need to count odd bcz they can interfare

//finaly if c > 1 means more than one char have oddcount then we can place one of them at center rest mirrored hence total.size() - oddcount/uneven pairs + 1(center) 
//finally return new longest plaindrome total.size()

//example: s = "abccccdd" freq = a:1, b:1, c:4, d:2 a (odd), b (odd) → c = 2
//hence c > 1 Max palindrome length = 8 - 2 + 1 = 7 like "dccaccd" (length 7)
    int longestPalindrome(string s) {
        int c = 0;
        unordered_map<char, int> mp;
        for(char ch : s){
           mp[ch]++;
           if(mp[ch] % 2 == 1) c++;
           else c--;
        }
        if(c > 1) return s.size() - c + 1;
        return s.size();
    }
};