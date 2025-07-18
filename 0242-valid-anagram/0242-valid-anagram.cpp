class Solution {            
public:
//anagram is topic where a valid word can be formed by rearranging another word
//MOST EAIEST SOLUTION BUT PLZ DO WITH A ALTERNATIVE CODE ALSO
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return (s == t) ? true : false;
    }
};
//ALTERNATIVE AND LOGIC BEHIND CODE
/*
class Solution {               
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        int arr[26] = {0};
        for(int i=0; i<s.length(); i++){
            arr[s[i]-'a']++;
            arr[t[i]-'a']--;
        }
        for(int i=0; i<26; i++){
            if(arr[i] != 0){
                return false;
            }
        }
        return true;
    }
};
*/