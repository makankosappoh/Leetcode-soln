class Solution {
public:
//two pointer method
    int partitionArray(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    int s = 0; // initialize s as starting nums[] of any partition subarray
    int i = 0; // pointer to check curent element after starting s pointer 
    int count = 1; // count no. of subsequences start with one or more than one
    while(i < nums.size()){ 
    if(nums[i] - nums[s] > k){ // check if curent max - s(min) <= k valid
        s = i; // broke rule of <= k hence starting i becomes new s for next subarray 
        count++; // No. of subsequence increase  
        continue; //skip that broke rule subarray and move to next subarray by count++
        }   
        i++; //if rule <= valid, move to next elementin loop
    }
        return count;
    }
};