class Solution {
public:
//easy sorting and 2 pointer method
//return length of lngest subsq harmonious array where diff b/w max and min value exacts 1
//sort array and initilize a starting min i and ans  = 0
//also loop through j pointer checking current max value if nums[j] - nums[i] = 1then return max length harmonius array 
// if not equal to 1 or greater than 1....move to new minumum point
    int findLHS(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i = 0; 
        int ans = 0;
        for (int j = 0; j < nums.size(); j++ ){
            if (nums[j] - nums[i] == 1) {
                ans = max(ans, j - i + 1); 
            }
            while(nums[j] - nums[i] > 1) {
                i++;
            } 
        }
        return ans;
    }
};