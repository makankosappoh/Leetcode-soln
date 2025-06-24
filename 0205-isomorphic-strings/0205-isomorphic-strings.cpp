class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char , char> mp1; // maps from s[i] → t[i]
        unordered_map<char , char> mp2; // maps from t[i] → s[i]
        if(s.size() != t.size()) return false;

        for(int i = 0; i < s.length(); i++) {
            int c1 = s[i];
            int c2 = t[i];
        // If s[i] is already mapped and maps to something other than t[i], return false.
            if(mp1.count(c1) && mp1[c1] != c2) return false;
        // If t[i] is already mapped and maps to something other than s[i], return false.
            if(mp2.count(c2) && mp2[c2] != c1) return false;
            // Otherwise, store the mappings in both maps.
            mp1[c1] = c2;
            mp2[c2] = c1;
        }
        return true;
    }
};
