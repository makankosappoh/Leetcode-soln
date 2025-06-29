class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 2; //bcz single element has atmost 2 unique,one itself and other its dups
        if (nums.size() <= 2) return nums.size();
        for (int i = 2; i < nums.size(); i++) {//start from 3rd element
         // Check if the current element is different from the element at position k - 2
         // This ensures we don’t allow more than two duplicates of any element
            if (nums[i] != nums[k - 2]) {
                nums[k] = nums[i]; // Place the valid element at index k
                k++;               // Move the k pointer forward
            }
        }
        return k;       
    }
};