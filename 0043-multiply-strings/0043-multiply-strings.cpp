class Solution {
public:
//HARD COME BACK AND UNDERSTAND
    string multiply(string num1, string num2) {
        if(num1 == "0" || num2 == "0") return "0"; //edge case
        int n1 = num1.size();
        int n2 = num2.size();
        vector<int> num(n1 + n2, 0);//max no. of digits 
        //loop through each digit of num1 , num2 in reverse order
        for(int i = n1 - 1; i >= 0; --i){
            for(int j = n2 - 1; j >= 0; --j){
                //Convert characters to digits by subtracting '0' and multiply digits
                num[i + j + 1] += (num1[i] - '0') * (num2[j] - '0'); 
                num[i + j] += num[i + j + 1] / 10;//store current digit
                num[i + j + 1] %= 10;//carry over to next position
            }
        }
        //skip leading zeroes
        //If the result is like [0, 0, 1, 2, 3], we skip the leading zeros.
        int i = 0;
        while(i < num.size() && num[i] == 0) ++i;
        string ans = "";
        //convert vector to string
        //convert each digit in the vector back to characters by adding '0'
        while(i < num.size()) ans.push_back(num[i++] + '0');
        return ans;
    }
};
/*
Example: num1 = "123", num2 = "45"
num1 = "123", num2 = "45"
n1 = 3, n2 = 2
Result vector: [0, 0, 0, 0, 0]  (size 3+2)
Start from the back:

Multiply 3 × 5 = 15
→ num[4] += 15 = 15 → num[3] += 1 (carry), num[4] = 5
→ num = [0, 0, 0, 1, 5]

Multiply 3 × 4 = 12
→ num[3] += 12 = 13 → num[2] += 1 (carry), num[3] = 3
→ num = [0, 0, 1, 3, 5]

Multiply 2 × 5 = 10
→ num[3] += 10 = 13 → num[2] += 1 (carry), num[3] = 3
→ num = [0, 0, 2, 3, 5]

Multiply 2 × 4 = 8
→ num[2] += 8 = 10 → num[1] += 1 (carry), num[2] = 0
→ num = [0, 1, 0, 3, 5]

Multiply 1 × 5 = 5
→ num[2] += 5 = 5 → num[1] remains, num[2] = 5
→ num = [0, 1, 5, 3, 5]

Multiply 1 × 4 = 4
→ num[1] += 4 = 5
→ num = [0, 5, 5, 3, 5]

Final vector: [0, 5, 5, 3, 5]
Skip leading 0 → Result = "5535"
*/