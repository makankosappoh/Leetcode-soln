class Solution {
public:
// muuch easy approach by hashmap
    vector<int> twoSum(vector<int>& nums, int target) {
        if (nums.empty())
            return {}; // if empty return nothing
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++) {
            // calculate complement of nums[i] by subracting it with target
            int d = target - nums[i];
            // if complement exist, return solution as valid pairs of number
            if (map.count(d))
                return {map[d], i};
            // not in if loop, default if complemetn dont exist add current
            // element nums[i] to hash table as its index value
            map[nums[i]] = i;
        }
        return {}; // default nothing if no solution found
    }
};