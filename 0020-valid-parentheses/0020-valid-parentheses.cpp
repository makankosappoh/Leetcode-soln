class Solution {
public:
//basic stack approach push ({[ into top and chec k for )}] if found pop matched pairs and make stack empty returning true for empty stack
    bool isValid(string s) {
        stack<char> stk;  // Stack to keep track of opening brackets
        for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            stk.push(c);
        } else {
        // If stack is empty or top doesn't match the closing bracket, return false
        if (stk.empty()) {
            return false;
        }
        char top = stk.top();
        if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
            return false;
        }
        stk.pop();  // Pop matched opening bracket
        }
    }
   return stk.empty(); // If stack is empty, all brackets matched, else false
}
};
