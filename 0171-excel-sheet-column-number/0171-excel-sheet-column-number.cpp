class Solution {
/*
The column titles are based on a modified base-26 number system, with 'A' corresponding to 1, 'B' to 2, ..., 'Z' to 26, 'AA' to 27, and so on.
Notice AA --> 26*1+ 1 = 27 (A == 1) and AB --> 26*1+ 2 = 28 (B == 2) so on....
hence for each character 
Multiply the current result by 26 (to shift left in the base-26 system).
convert char to integer value and add it(subtract 'A' and add 1 to get the correct value).
finaly return final ans.
*/
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        for(char c : columnTitle){
            ans = ans * 26 + (c - 'A' + 1);
        }
        return ans;
    }
};