class Solution {
public:
//actually good Q
//example word is car ..then mistakenly i typed ccccar or caaar etc so find different original strings formed final word by removing one char that was typed twice
//assume typed word is exactly correct hence itnitalize ans = 1
//start traversing from start to size() - 1 and check current char with next one 
//if both char same means mistakenly typed twixe bcz of pressing keyboard hnce increase ans++
//return ans (ie 1 and + 1 for adjacent duplicate)
    int possibleStringCount(string word) {
        int ans = 1;
        for(char i = 0; i < word.size() - 1; i++){
            if(word[i] == word[i + 1]){
                ans++;
            }
        }
        return ans;
    }
};