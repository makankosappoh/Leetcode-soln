class Solution {
public:
//common logic Q
//we need to find if we can reach last index from first index 
//for that each no. descrives how far we can jump ..hence making us a track record for tracking fartheset point reachable as we go
//hence initialzie a maxreach to store farthese index reachable
//if current indx i > maxreach we are already stuck cant go further
//else update maxreach to max of itself and i + nums[i] as nums[i] jump value
    bool canJump(vector<int>& nums) {
        int maxreach = 0;
        for(int i = 0; i < nums.size(); i++){
            if(i > maxreach) return false;
            maxreach = max(maxreach, i + nums[i]);
        }
        return true;
    }
};