#include <string>
#include <stack>
#include <unordered_set>
using namespace std;
class Solution {
public:
//when we push po elements in stack they come out auto matic reverse order 
//we used stack becuase we only want vowels to revere rest char remain intact
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'a','e','i','o','u','A','E','I','O','U'};
        stack<char> st;
        //using stack to identify vowels cretaed by unorderedset and push in stack
        for(int i = 0; i < s.size(); i++){
            if(vowels.count(s[i])){
                st.push(s[i]);
            }
        }
        //after that we can use top() and pop() them and then return string
        for(int i = 0; i < s.size(); i++){
            if(vowels.count(s[i])){
                s[i] = st.top();
                st.pop();
            }
        }
    return s;
    }
};