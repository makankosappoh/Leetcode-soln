class Solution {
public:
// common thinkng Q 
// if string s can e partitioned into group of substrings with lenght = k 
// but twist is if last group < k char remaining then a "fill" char is used to meet the vancancy spots
// eg: s="abcdefghi" , k = 4
// subgroups as: s1="abcd" s2="efgh" s3="i _ _ _"
// notice last group hve  , k remaing hence meet vacancy by "fill" (lets say x)
// s3 = 'ixxx' hence return ans[] = {s1,s2,s3}
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;  // Answer vector to store the subgroups
        bool isFilled = false; 
        string subgroup = "";  //Temporary string to build current subgroup
        for (int i = 0; i < s.size(); i++) {
            if (subgroup.size() < k) {
                subgroup += s[i]; // Add character to current subgroup
            }else {
                ans.push_back(subgroup);//if already k char in subgroup push into finalans
                subgroup.clear(); // Clear to start next subgroup
                subgroup += s[i]; // Add current character to new subgroup
            }
        }
        // If last subgroup is exactly of size k
        if (subgroup.size() == k) {
            ans.push_back(subgroup);
            return ans;
        }
        // If last subgroup is incomplete, fill remaining spots
        while (subgroup.size() < k) {
            isFilled = true;
            subgroup += fill;
        }
        if (isFilled) ans.push_back(subgroup);
        return ans;
    }
};
