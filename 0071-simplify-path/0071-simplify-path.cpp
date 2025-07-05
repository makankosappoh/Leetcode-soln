class Solution {
public:
//intution apporach
/*
create a stack st and string ans iterate till end of path string
if "/" then ignore and continue 
create a dummy string check and iterate while loop till find "/" again and append in check string
if check == "." ignore it and if check ".." pop element form topmost element as we have to jump back to parent’s directory.
When we see multiple “////” we just ignore them as they are equivalent to one single “/”.
push check string to original stack till find valid path 
finally add all stack element to result as ans += "/" + st.top()  
critical point: if ans.size() = 0 return "/" as no directory or file present and lastly return ans
*/
    string simplifyPath(string path) {
        vector<string> st;
        int i = 0, n = path.size();
        while (i < n) {
            while (i < n && path[i] == '/') i++; 
            string check;
            while (i < n && path[i] != '/') check += path[i++]; 
            if (check == "" || check == ".") continue;
            else if (check == "..") {
                if (!st.empty()) st.pop_back();
            } else {
                st.push_back(check);
            }
        }
        string ans;
        for (const string& dir : st)
            ans += "/" + dir;
        return ans.empty() ? "/" : ans;
    }
};
