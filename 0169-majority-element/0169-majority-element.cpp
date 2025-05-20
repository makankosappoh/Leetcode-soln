class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        return nums[n/2];
    }
};
//this sorting method is not reliable as its only returning n/2th index.......come back and try with other algos and other method like hashmap, bv algo etc.
