/*
WE USE THIS ESPECIALLY BCZ WE NEED 0(1) TC
logic will be Two passes: Left pass for prefix, Right pass for suffix
Input: nums = [1, 2, 3, 4]
Output: [24, 12, 8, 6]
hence
Prefix Calculation (Left to Right):
prefix[0] = 1 (nothing on the left)
prefix[1] = nums[0] = 1
prefix[2] = nums[0] * nums[1] = 1 * 2 = 2
prefix[3] = nums[0] * nums[1] * nums[2] = 1 * 2 * 3 = 6
and
Suffix Calculation (Right to Left):
suffix[3] = 1 (nothing on the right)
suffix[2] = nums[3] = 4
suffix[1] = nums[2] * nums[3] = 3 * 4 = 12
suffix[0] = nums[1] * nums[2] * nums[3] = 2 * 3 * 4 = 24
Finally
Output:
output[0] = prefix[0] * suffix[0] = 1 * 24 = 24
output[1] = prefix[1] * suffix[1] = 1 * 12 = 12
output[2] = prefix[2] * suffix[2] = 2 * 4 = 8
output[3] = prefix[3] * suffix[3] = 6 * 1 = 6
*/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        int left = 1;
        for (int i = 0; i < n; i++) {
            ans[i] *= left;
            left *= nums[i];
        }
        int right = 1;
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= right;
            right *= nums[i];
        }
        return ans;
    }
};
