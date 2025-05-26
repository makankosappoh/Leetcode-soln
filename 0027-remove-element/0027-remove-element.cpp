class Solution {
public:
// DITTOO COPY similar to LEETCODE - remove duplicate form the array Q
// instead of removing duplicate we have to remove already given val till all val removed/ 
    int removeElement(vector<int>& nums, int val) {
        int count = 0;//val can be at starting also so count initial to 0;
        for (int i = 0; i < nums.size(); i++){//iterate form start
             if(nums[i] != val){
                nums[count] = nums[i];//replace val with non-val element at current i position
                count++;
            }
        }
       return count;
    }
};