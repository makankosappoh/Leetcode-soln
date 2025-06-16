/*
class Solution {
public:
//brute force //not optimized much
//initialize diff -1 early because default case if we encounter no i and j such that i < j and nums[i] < nums[j].
//traverse through i and j being next to i and check nums[j] > nums[i] 
//return max of -1 and subraction of nums[i,j] finally returning new diff
    int maximumDifference(vector<int>& nums) {
        int diff = -1;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(nums[j] > nums[i]) diff = max(diff, nums[j] - nums[i]);
            }
        }
    return diff;
    }
};
*/
//best optimized code
//create vectro arrya prefix suffix for holding min and max element from i respectively 
class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        vector<int> pre(n), suff(n);
        //preffix stores the smallest element seen so far at each position.
        pre[0] = nums[0];//first element fixed
        for(int i = 1; i < n; i++){//start form next to first
            pre[i] = min(pre[i - 1],nums[i]);//compare and return min preffx
        }
        //suffix stores the largest element seen so far from the end at each position.
        suff[n - 1] = nums[n - 1];//last element fixed
        for(int i = n - 2; i >= 0; i--){//start from 2nd last
            suff[i] = max(suff[i + 1],nums[i]);//compare and return max suffix
        }
        for(int i = 0; i < n; i++){//normal loop traverse
            ans = max(ans,suff[i] - pre[i]);//return max form ans and diff 
        }
        if(ans==0) return -1;
        return ans;
    }
};