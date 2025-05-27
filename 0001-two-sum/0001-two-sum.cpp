class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size();i++){//iterate each element for idx i
            for(int j = i + 1; j < nums.size(); j++){//also iterate idx j from i + 1 next element
                if(nums[i]+nums[j] == target){
                    return {i,j};//we use another j bcz we need two seperate indexes
                }
            }
        }
        return{};
    }
};