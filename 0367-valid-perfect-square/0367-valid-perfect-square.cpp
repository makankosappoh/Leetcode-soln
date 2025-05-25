class Solution {
public:
// DITTO COPY logic and solution of modified binary search used in Leetcode queston Sqrt(x)
// just instead of returning mid no we return true or false
    bool isPerfectSquare(int num) {
        int left = 1;
        int right = num;
        while(left <= right){
            int mid = left + (right - left)/2;
            long long square = 1LL * mid * mid;
            if(square == num){
                return true;
            }else if(square < num){
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }
        return false;
    }
};