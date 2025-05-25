class Solution {
public:
//basicaaly we cant directly do x^n becouae of negative no. issues and higher powers types 
//first convert negetives into positive by x^-n = 1/x^n
    double myPow(double x, int n) {
        long N = n;
        if (N < 0) { //negative power
            x = 1 / x;
            N = -N;// make positive the negative power as -- cancel out to +
        }
     return power(x,N);
    }
//simplify higer n power breakdown into smaller powr no.s
/*eg: x^6 instead of computer multiply x 6 times we can reduce no of multiplication as 
      x^3 * x^3 
      and for odd numbers like x^7 = x^3*x^3*x^1 */
private:
    double power(double x, long n) {
        if (n == 0) {
            return 1;
        }
        double half = power(x, n / 2);  //create a varable for eqn: x^n/2
        if (n % 2 == 0) {
            // n is even
            return half * half; //x^n = x^(n/2)*x^(n/2)
        } else {
            // n is odd
            return half * half * x; //x^evenpower multiply another single x
        }
    }
};