class Solution {
public:
//for no. less than 10 only 1 and 7 eventually form 1 as happy no. hece thses can be base case
//recursicvely extract last digit of n -> get square of it add to sum and extract first digit by n/10 becoming second iteration square till we get n/10 = 0 ..and then recursive call sum again process 
/*
example
n = 82
sum = 0
last digit extract 2 then add sum = 0 + 2^2 = 4
extract 8 ..last digit extract 8 only add sum = new 4 + 8^2 = 68
extract 8/10 = 0...final sum = 68 then recursive call sum....till ishappy or not
*/
    bool isHappy(int n) {
        if(n==1 || n==7) return true;
        else if(n<10) return false;
        else{
            int sum = 0;
            while(n > 0){
                int digit = n%10;
                sum += digit*digit;
                n = n/10;
            }
            return isHappy(sum);
        }
    }
};