class Solution {
public:
    //0th index rest, other index change so we are doing from 1st index number.
    //addition with nums[i-1] or previous indexes correspond to that index no. as new 1st index....continuing till ith index of nums array.
    vector<int> runningSum(vector<int>& nums) {
        for ( int i = 1; i < nums.size(); i++ ){
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};