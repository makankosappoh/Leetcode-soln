class Solution {
public:
//firstly sort to get better idea form smallest->largets element
    //largest = prod of last,secondlast,thirdlast as all test cases has 3-4 elements
    /*smallest = prod of first,second and last element...why not third element becuase sometimes pro of two negative smallest givesus positive no. which then multilied by largets ats no. to giv much bigger final answer */
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int largestProduct = nums[n-1] * nums[n-2] * nums[n-3];
        int smallestProduct = nums[0] * nums[1] * nums[n-1];
        return max(largestProduct,smallestProduct);//max(a,b) one output max value out of a and b 
    }
};