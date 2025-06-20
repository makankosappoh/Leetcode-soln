class Solution {
public:
//easy
//much easy represent
    int fib(int n) {
        if(n == 0) return 0;
        if(n == 1) return 1;
        int f0 = 0;
        int f1 = 1;
        int ans;
        for(int i = 2; i <= n; i++){ //start from 2 as f0 , f1 already initialized
            ans = f0 + f1; //update ans as fibo addition
            f0 = f1; // f0 becomes current f1after updating ans
            f1 = ans; // f1 becomes new updated ans hence looping correspondingly
        }
        return ans;
    }
};