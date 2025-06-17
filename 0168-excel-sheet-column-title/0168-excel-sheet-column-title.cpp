class Solution {
public:
//converting integer into corresponding excel coumn title ...with title having base-26 number system - eg: A = 1; B = 2..Z= 26 then AA is 27 
    string convertToTitle(int columnNumber) {
        string ans = "";//initialzie a string ans for getting colum title
        while( columnNumber > 0){
           // Because Excel indexing starts at 1 but programming index starts at 0.
            columnNumber--; // decrement to handle 1-based indexing
// Find the character corresponding to the current digit (0 ->'A', 1->'B', ..., 25->'Z')
//+ 'A': Converts this number to the corresponding uppercase letter
//+ ans: prepend the letter to ans bcz we are building the string from right to left
            ans = char(columnNumber % 26 + 'A') + ans;
            columnNumber /= 26;//// Move to the next digit, updating colun no.
        }
        return ans;
    }
};
/*
Example: columnNumber = 28
Step 1:
columnNumber = 28
Decrement → 27
Calculate → 27 % 26 = 1 → 'B'
Result so far → "B"
Divide → 27 / 26 = 1
Step 2:
columnNumber = 1
Decrement → 0
Calculate → 0 % 26 = 0 → 'A'
Result so far → 'A' + "B" = "AB"
Divide → 0 / 26 = 0 → Loop ends
Final Result: "AB"
*/
