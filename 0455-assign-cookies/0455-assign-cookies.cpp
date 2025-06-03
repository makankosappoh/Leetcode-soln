class Solution {
public:
//already condition for loop given 
//Children have needs (greed factor)
//Cookies have sizes
//So give just enough to satisfy them — not too much, not too little
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int i = 0;//child index
        int j = 0;//cookie index
        while(i < g.size() && j < s.size()){
            if(s[j] >= g[i]){ 
                //assign the smallest cookie that is at least as big as the child's greed
                i++;
            }
            j++;
        }
     return i; 
    }
};