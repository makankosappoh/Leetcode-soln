class Solution {
public:
//VERY SIMILAR TO 3SUM Q But track closest sum found each step

// sort array for 2 pointer
// put a closest_sum as DUMMY CLOSEST CASE STARTING POINT
// The last valid triplet starts at index n - 3 hence iterate till n - 2 To ensure there are at least two elements left for j and k to form a triplet.
// initialize nums[0] as i fix while j = i + 1 and k be nums.size() - 1
// At each iteration, calculate nums[i] + nums[j] + nums[k] check closest to target?
// If the pointer sum is closer to the target than the previously stored dummy case closest_sum, update closest_sum
// continue iteration and checking other triplets by adjusting pointers j++ and k--
// return if exact or closest near found
    int threeSumClosest(vector<int>& nums, int target) {
       sort(nums.begin(), nums.end());
       int closest_sum = nums[0] + nums[1] + nums[2];
        for(int i = 0; i < nums.size() - 2; i++){
            int j = i + 1; 
            int k = nums.size() - 1;
            while(j < k){
                int pointer_sum = nums[i] + nums[j] + nums[k];
                if(abs(pointer_sum - target) < abs(closest_sum - target)){
                    closest_sum = pointer_sum;
                }
                if(pointer_sum < target) j++;
                else if(pointer_sum > target) k--;
                else return pointer_sum;
            }
        }
        return closest_sum;
    }
};