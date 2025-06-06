class Solution {
public:
//EASY
//two pointer approach or type of binary search code but instead of searching we doing binary return for start/end summasiison =? target
    vector<int> twoSum(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
    while(start < end){
        if((nums[start] + nums[end]) > target){
            end--; //if sum greater than target keep decrmeneting end till optimal target
        }else if((nums[start] + nums[end]) < target){
            start++; //if sum less than target keep incrementing start till optimal target
        }else{
            //if sum == target then return vector of two integers in set form {}
            return {(start + 1),(end + 1)};
        }
    }
    return {};//if sum never = target return nothing set {}
}
};