class Solution {
public:
//when substr in h string matches n string, return starting index/i of substr
//if no match after reading string h, return -1
    int strStr(string haystack, string needle) {
        int h = haystack.size();
        int n = needle.size();
        //iterate till substr in h match n ie til <= h - n
        for(int i = 0; i <= h - n ; i++){
           if(haystack.substr(i,n) == needle){
              return i;
            }
        }
    return -1;
    }
};