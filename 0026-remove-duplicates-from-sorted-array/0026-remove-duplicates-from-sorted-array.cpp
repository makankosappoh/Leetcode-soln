class Solution {
public:
//count no. of unique elements in array after removing duplicates 
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty()) return 0;
        int count = 1; //first element always unique or count index
        for(int i = 1; i < nums.size(); i++){//iteration start form 2nd element
            if(nums[i] != nums[i - 1]){ //check current no. wit its previous no.
                nums[count] = nums[i];//place unique element to 
                count++;
            }
        }
        return count;
    }
};