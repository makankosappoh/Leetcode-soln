class Solution {
public:
// DITTO COPY of LEETOCDE remove array Q
    void moveZeroes(vector<int>& nums) {
        int count = 0; //start from first element
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != 0){//if ith index element not 0 then swap with previous elemtn of count
                swap(nums[i],nums[count]);
                count++;
            }
        }
     //no need for return as void fxn
    }
};