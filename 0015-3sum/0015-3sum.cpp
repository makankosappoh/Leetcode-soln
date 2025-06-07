class Solution {
public:
//we can do basic brute force and solve as given in Q but time exceed bcz of 3 pointers i,j,k
//instead we can do 2 pointers best approach using striver approach 

/* 
as we know array will be sorted first hence we can fix i as smallst so fix i at nums[0] and j = i + 1 next to i and also k be n - 1, last element now add nums[i,j,k] till we get zero...

Common sense if sum < 0 mean we have to j++ and then check for next ...similarly if sum > 0 so k-- and again iterate till if sum = 0...we return nums[i,j,k] set already in sorted manner.

now for next tripet set move the fixed i to newest such that if i not first element and nums[icurrent] == nums[iprevious] continue moving i till we get a different i 

similarly we have to avoid j and k swap because they already sorted hence put a new condition for nums[jcurrent] == nums[jprevious] continue j++ till new j element, 
nums[kcurrent] == nums[knext] continue k-- till new k element and j < k sorted.
finally after checking ll loops ..return ans
*/

vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1;
            int k = nums.size() - 1;
         while(j < k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum < 0) j++;
            else if(sum > 0) k--;
            else{
                ans.push_back({nums[i], nums[j], nums[k]});
                j++;
                k--;
                while(j < k && nums[j] == nums[j - 1]) j++;
                while(j < k && nums[k] == nums[k + 1]) k--;
            }
        }
    }
    return ans;
}
};