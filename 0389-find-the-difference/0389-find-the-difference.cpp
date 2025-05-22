class Solution {
public:
//XOR ^ of two same identical string reustl in 0  and if not same give the extra thing to us
//first iterate XOR for S giving extra already 0 again 0
//this new extra after s string get XORed for T string 0ing all same chars and leaving a new extra value 
    char findTheDifference(string s, string t) {
        int extra = 0;
        for(char c : s){
            extra = extra^c;
        }
        for (char c : t){
            extra = extra^c;
        }
        return extra;
    }
};