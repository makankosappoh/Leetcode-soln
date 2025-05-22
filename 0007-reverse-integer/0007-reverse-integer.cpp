#include <climits>//no need to declare intmax/min limits
class Solution {
public:
//first check Plaindrome no. for explaination
 //same as Palindrome reverse just extra condition of checking if rev outrange of 32-bit return 0
    int reverse(int x) {
       //long long INT_MAX = 2147483647, MIN_INT = -2147483648;
       long long rev = 0, rem;
        while(x != 0){
            rem = x%10;
            rev = rev*10 + rem;
            x = x/10;

            if(rev > INT_MAX || rev < INT_MIN){
                return 0;
            }
        }
     return int(rev);
    }
};