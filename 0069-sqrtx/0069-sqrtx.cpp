class Solution {
public:
//binary search with modifications from left = 1, right = no. x
//x can be a big value so ensure u use long long bcz i got error in one of test case for x = 2454646345
/*   
   testcase x = 9
   First iteration:
mid = 1 + (9 - 1)/2 = 5
mid * mid = 5 * 5 = 25 → too big
So, right = mid - 1 = 4

    Second iteration:
mid = 1 + (4 - 1)/2 = 2
mid * mid = 2 * 2 = 4 → too small
So, left = mid + 1 = 3

    Third iteration:
mid = 3 + (4 - 3)/2 = 3
mid * mid = 3 * 3 = 9 → exact match
Finally  Return mid = 3            */
    int mySqrt(int x) {
        if(x == 0){
            return 0;
        }
        int left = 1;
        int right = x;
        while(left <= right){
            int mid = left + (right - left)/2;
            long long square = 1LL * mid * mid;
            if(square == x){
                return mid;
            }else if(square < x){
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        return right;
    }
};