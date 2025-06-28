class Solution {
public:
//1) sum of all elements i range[0,n]  = n(n + 1)/2 
//2) normal sum of given numbers = n1 = n2...n 
// hence missing number = 1) -2)

//eg: 3,0,1..size = 3,  given ==>
//ideal formula 3(3-1)/2 = 6 and otherwise 3 + 0 + 1 = 4
//missing no. = 6 - 4 = 2 
     int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int Tsum = (n*(n+1))/2;
        return  Tsum - accumulate(nums.begin(),nums.end(),0);
        
    }
}; 

