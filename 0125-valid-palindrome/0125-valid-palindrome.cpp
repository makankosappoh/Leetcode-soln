class Solution {
public:
//GOOD Q 
// create empty string in which filtered and lowercased new string added from s
// use of tolower() to lowercase each element
// check for constriant a->z and digits 0->9 if true then add them in a as +=
    bool isPalindrome(string s) {
        string a = "";
        for(auto c : s){
            if ((tolower(c) >= 'a' && tolower(c) <= 'z') || (c >= '0' && c <= '9')){
                a += tolower(c);
            }
        }
        int n = a.size();
        return checkP(a, 0, n); //start recursion form 0
    }

    // Recursive apporoach by striver
// first after filtering stirng s to new string a for checkP
// if reaches middle index we already know its palindrome return true
// OR compare if start and end if not same return false as they not palindrome
// return i + 1 for check so that it go back repeat steps for next index iterations

bool checkP(string &s, int i, int n){
    if(i >= n/2){
        return true;
    }if(s[i] != s[n-i-1]){
        return false;
    }
    return checkP(s,i+1,n);
    }
};