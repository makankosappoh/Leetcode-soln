#include <climits> 
class Solution {
public:
    int reverse(int x) {
        int revans = 0; // Initialize reverse answer 
        while (x != 0) {
            int lastdigit = x % 10; // Get the last digit
            x /= 10; // Remove the last digit from x to get remaining other x values 
            // Check overflow/underflow before multiplying
            if (revans > INT_MAX / 10 || (revans == INT_MAX / 10 && lastdigit > 7)) return 0;
            if (revans < INT_MIN / 10 || (revans == INT_MIN / 10 && lastdigit < -8)) return 0;
            // Perform the reverse operation: shift digits left and add the lastdigit
            revans = revans * 10 + lastdigit;
        }
        return revans;
    }
};
