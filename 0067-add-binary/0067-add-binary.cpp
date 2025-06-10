class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int i = a.length() - 1;// we create i pointer for string a and we have to start adding from right to left
        int j = b.length() - 1;// similar pointer j for string b
        int carry = 0;//carry initialized to be zero first 
        while(i >= 0 || j >= 0){
            int sum = carry;// intialise our sum with carry;
            // Now, we subtract by '0' to convert the characters from a char type into an int, so we can perform operations on the numbers
            if(i >= 0) sum += a[i--] - '0';
            if(j >= 0) sum += b[j--] - '0';
            carry = sum > 1 ? 1 : 0;// getting carry depends on if the sum is greater than 1. If so, carry is 1, otherwise 0.
            res += to_string(sum % 2);// just taking the sum modulo 2 so, we can get the remainder and add it into our result
        }
        if(carry) res += to_string(carry);//we add the carry to res if there's a remaining carry
        reverse(res.begin(), res.end());// reverse the answer we get and return it
        return res;
    }
};
