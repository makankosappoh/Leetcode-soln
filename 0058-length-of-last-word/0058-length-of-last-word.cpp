class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.size();
        int count = 0;
//basic is that we set a for loop tranvering from last word index - n-1 to first char i = 0
        for(int i = n - 1; i >= 0; i--){
            if(s[i] != ' '){ 
                count++;   //we are increasing count value till we found any space in string
            }else if(s[i] == ' ' && count>0){
                return count; //the time we found space we know we traversed and got count 
            }                 //value or length of last word ....so return count
        }
    return count;
    }
};