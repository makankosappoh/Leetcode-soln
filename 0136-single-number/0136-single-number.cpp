class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int val = nums[0]; // for single ellemnt in array ...or initialize forst index elemnt
        for ( int i = 1; i < nums.size() ; i++ ){
            val ^= nums[i]; //^xor used to remove unique elements so that nums[0] xor with starting 1st index till ith
        }
      return val;
    }
};