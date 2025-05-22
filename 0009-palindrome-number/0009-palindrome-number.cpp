class Solution {
public:
    bool isPalindrome(int x) {
        //method1 intiuition normal method 
        if (x < 0 || (x%10 == 0 && x != 0)){//if negtive no. and last digit is 0, return false
            return false;
        }
        long int original_no = x;
        long int extract_last_digit;
        long int rev = 0;
        //reverseing no. x
        while(x > 0){
            extract_last_digit = x%10; //eg - 1234 give 4 
            rev = rev*10 + extract_last_digit; //create reverse from it like 0*10 + 4 = 4
            x = x/10; //rest no left after 4 ie 123 that will loop extract_last_di and continue
        }if(original_no == rev){
            return true;
        }
        return false;
    }
};