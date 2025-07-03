class Solution {
public:
//Generate a new string by changing each character in word to its next character in the English alphabet, and append it to the original word.
//example abc then (next to a is b...next to b is c and next to d is e) hence new word = abcbcd
//similarly eg: zb --> zbac
//repeat process on word untill string length >= k and return kth char (1 base index)
    char kthCharacter(int k) {
        string word = "a"; //start wwith 1
        int n = 1; //initalize for first step for "a" 
        while(n < k){//while loop stop when word.size() >= k
            n = word.size();
            for(int i = 0; i < n; i++){
            //if encounter "z" for each char c in word then becomes "a"
                if(word[i] == 'z') word.push_back('a'); 
            //else normal push for each char c in word do c + 1 next corresponding aphabet
                else word.push_back(word[i] + 1);
            }
        }
        return word[k - 1]; //(0 based indexing)
    }
};