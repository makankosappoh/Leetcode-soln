class Solution {
public:
//EASY
//initialize maxdiff pointer be zero for now to track and remeber each maxdiff across array iterate through array with next to element i.
//the next element is designed such that in circular if we get to last index i then go back to first 0 index itself not just stop there
//check diff as given in Q diff between adjacent elemtn for each case in circular 
//finally return MAX value out of maxdiff and diff 
    int maxAdjacentDistance(vector<int>& nums) {
        int maxdiff = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int next = (i + 1) % n;
            int diff = abs(nums[i] - nums[next]);
            maxdiff = max(maxdiff, diff);
        }
        return maxdiff;
    }
};