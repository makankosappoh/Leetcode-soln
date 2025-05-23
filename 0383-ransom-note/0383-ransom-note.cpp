class Solution {
public:
    /* easy just iterate magazine and increment index value for ransomNote till
     * we found any string valuediff in both side ....the time they diff we come
     * out of loop with r != rm length of ransom returning false */
    bool canConstruct(string ransomNote, string magazine) {
        int rm = ransomNote.size();
        int mg = magazine.size();
        sort(ransomNote.begin(), ransomNote.end());
        sort(magazine.begin(), magazine.end());
        int r = 0;
        for (int m = 0; m < mg && r < rm; m++) {
            if (ransomNote[r] == magazine[m]) {
                r++;
            }
        }
        if (r == rm) {
            return true;
        } else {
            return false;
        }
    }
};