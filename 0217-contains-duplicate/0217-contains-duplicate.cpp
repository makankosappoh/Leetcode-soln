class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());
         int n = nums.size();
         //i learned when we checking n with n + 1 in array we need from 0 -> n - 1
         //example size 4 so check till index = 0 -> 3 so it reach till 2 = 3
        for(int i = 0; i < n - 1; i++){
            if(nums[i] == nums[i + 1]){
            return true;
            }
        }
        return false;
    }
};