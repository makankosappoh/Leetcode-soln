class Solution {
public:
//EASY :
/*sort the array eg: [1, 3, 4], with set target = 1
(n>0) n start with 1 also n == target, so target is incremented to 2.
next iteration n = 3: n is greater than target (2), so returns 2 as the smallest missing positive integer.*/
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int target = 1;
        for (int n : nums) {
            if (n > 0 && n == target) {
                target++;
            } else if (n > target) {
                return target;
            }
        }
        return target;
    }
};