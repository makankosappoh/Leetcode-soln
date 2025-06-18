class Solution {
public:
//given array n elements we have t divide into group of 3 elements with no two element differ more then k and combine all those groups into a new single array
//hence use f sorting so that element closest vaues grouped together and then initialize low/mid/high 3 element groups and check high - low > k or not if greater return nothing we dont want. or add then to ans if hig - low <= k and finally return ans
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        if(nums.size() % 3 != 0) return {}; //check if Arr multiple of 3 then return none
        //array of array to make single array ith each group array in it 
        vector<vector<int>> ans; 
        for(int i = 0; i < nums.size(); i += 3){
            int low = nums[i]; // traverse in group of three only
            int mid = nums[i + 1];
            int high = nums[i + 2]; 
            if(high - low > k) return {};
            ans.push_back({low, mid, high});
        }
     return ans;
    }
};