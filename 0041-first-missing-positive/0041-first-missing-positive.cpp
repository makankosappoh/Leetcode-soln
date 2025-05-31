class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        //this for loop is to sort array and rearrange to correct indexes
        //iterate For every nums[i] = x, if x is in range [1, n]. 
        //and place it at index x-1 (if x = 3 and size = 4 then 3 insert at new index 3-1 = 2 to folow up 3rd place out of 4 size as 0,1,2th index )
    for (int i = 0; i < n; i++) {
        while (nums[i] > 0 && nums[i] <= n && nums[nums[i]-1] != nums[i]) {
            swap(nums[i], nums[nums[i]-1]);
        }
    }
       //this for loop check missing positive value 
       //after rearranging new array we know if num[i] = x is always equal i + 1 that is if oth index then it should have value 1, if 1 index value to be 2 and so on..... 
       //hence if x != i + 1 we know i + 1 is missing and return 
    for (int i = 0; i < n; i++) {
        if (nums[i] != i + 1){
             return i + 1;
        }
    }
    //hence if all elements present return element next to last element being least +ve
    //eg [1,2,3,4] then return n + 1 = 5 being least =Ve no.
    return n + 1;
    }
};


/*
SECOND EASY SOLUTION BUT TIME/SPACE COMPLX IS NOT GOOD 
class Solution {
public:
// sort the array eg: [1, 3, 4], with set target = 1
// (n>0) n start with 1 also n == target, so target is incremented to 2.
// next iteration n = 3: n is greater than target (2), so returns 2 as the smallest missing positive integer.
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int target = 1;
        for (int n : nums) {
            if (n > 0 && n == target) {
                target++;
            } else if (n > target) {
                return target;
            }
        }
        return target;
    }
};
*/
