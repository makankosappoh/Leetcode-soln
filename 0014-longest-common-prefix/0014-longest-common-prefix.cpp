class Solution {
public:
//sort the vector list then select first and last substring of vector strs
/*eg: strs = {"flower", "flow", "flight"} 
      after sort : strs = ["flight", "flow", "flower"]
      First string (S) = "flight", Last string (E) = "flower"
      iterate in S and check each sub element of S and E if equalthen add to empty string check 
      till both unequal sub element else break and return check*/
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n = strs.size();
        string S = strs[0];
        string E = strs[n-1];
        string check = "";
        for(int i = 0; i < S.size();i++){
            if(S[i] == E[i]){
                check += S[i];
            }else break;
        }
        return check;
    }
};