class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s_count = 0; //pointer for s starting index 0
        int t_count = 0; //pointer for t starting index 0
        while(s_count < s.size() && t_count < t.size()){
            if(s[s_count] == t[t_count]){ //if both individual elements equal 
                s_count++; //if true then increment s_count meaning moving to next element of s
            }
            t_count++;//always increment / move to next element of t regardless of equality
        }
        //return true of count value becomes equal to s size meaning subsequence of s in t
        return s_count == s.size();
    }
};