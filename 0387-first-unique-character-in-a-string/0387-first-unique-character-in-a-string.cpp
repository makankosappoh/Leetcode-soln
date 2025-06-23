class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;
        // initialize map to store char counts and update their counts in map
        for(auto c : s) mp[c]++; 
        for(int i = 0; i < s.size(); i++){
            if(mp[s[i]] ==  1) return i; // return index of first string with count 1
        }
        return -1;
    }
};