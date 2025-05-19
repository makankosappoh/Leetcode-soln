class Solution {
public:
    //sorting nums so that no need to put more cases in triangle inequality
    string triangleType(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int a = nums[0];
        int b = nums[1];
        int c = nums[2];

        if (a + b <= c){
            return "none";
        }
        else if (a == b && b == c){
            return "equilateral";
        }
        else if (a == b or b == c or c == a){
            return "isosceles";
        }
        else{
            return "scalene";
        }
    }
};