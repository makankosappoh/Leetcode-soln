class Solution {
public:
// The key idea is to maximize the sum of the minimum elements of each pair.
// By sorting the array, we can always pair consecutive elements.
//i += 2 means jump to the next pair. It skips the second element of each pair because we don't need it.picking even indexes 0,2,4.....min of each pair
// Therefore, we simply add every second element (starting from index 0) being min of each pair to get the maximum possible sum.
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int minSum = 0;
        for(int i = 0; i < nums.size(); i += 2){
            minSum += nums[i];
        }
        return minSum;
    }
};