class Solution {
public:
//3 pointer approach
/*
approach is to keep all the 0s before the low pointer, all the 2s after the high pointer, and all the 1s between the low and high pointers. 
// if mid  = 0, swap with low wih low ,mid incremented forawrd to next search
// else if mid 1 increment mid cuase mid already has 1 in it..continue move forawrd
// if 2 swap with high and high decremented
*/
    void sortColors(vector<int>& nums) {
        int low  = 0;
        int mid  = 0;
        int high = nums.size() - 1;
        while(mid  <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }else if(nums[mid] == 1){
                mid++;
            }else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};