class Solution {
public:
//Question asking about remaapping numbers to max or min and then retrun their difference 
//Hence for max push most significant non-9 digit up to 9 and change all its occurrences. 
//To minimize it, you want to pull its leading digit down to 0 and change all its occurrences.
//finally return Diff of both in int form

    int minMaxDifference(int num) {
// Step 1: Convert number to string for easy conversion or retypo of digits as we can directly edit string characters
        string s = to_string(num);
        char ch = 0;  // Variable to store the first digit that is not '9'
        for(char c : s){// Find the first digit that is not '9'
            if(c != '9') { 
                ch = c;   // Save this digit to replace later
                break;    // Break after finding the first such digit
            }
        }

        string maxNum; // This will store the maximum possible number
        if (ch) {  // If we found a digit to replace
            for(char c : s){ // Replace all occurrences of ch with '9' to maximize number
                maxNum.push_back(c == ch ? '9' : c);
            }
        } else { // If all digits were '9', no replacement needed
            maxNum = s;
        }

        // Step 8: Now create the minimum number
        char ch0 = s[0]; // Store the first digit
        string minNum;   // This will store the minimum possible number
        for(char c : s){ // Replace all occurrences of s[0] with '0' to minimize number
            minNum.push_back(c == ch0 ? '0' : c);
        }
        // Finally Return the difference between max and min
        return stoi(maxNum) - stoi(minNum);
    }
};
