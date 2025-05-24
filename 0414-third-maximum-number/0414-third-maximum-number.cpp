class Solution {
public:
//easy, just reverse array in descending order eg...2,2,3,1 -> 3,2,1
//now as we got each elemednt print the last 3rd index element that is 1
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        int first = nums[0]; //if array has only one element that is [1] so its already maximum
        int count = 1; //counter to loop an checking till we get to last element 
        //we using count to passby the duplicates and count distinct unique elements only
        //hence we cant directly for lioop and return nums[2] third element WRONG
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[i - 1]) {
                count++;
                if (count == 3) {
                    return nums[i];
                }
            }
        }
        return first;
    }
};
