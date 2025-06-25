class Solution {
public:
//easy conditions already given in Q
    // Function to calculate the maximum XOR of strong pairs in a vector.
    int maximumStrongPairXor(vector<int>& nums) {
        int ans = 0;
        // Iterate through each pair of numbers in the vector.
        for (auto x : nums) {
            for (auto y : nums) {
                // Check if the pair (x, y) is a strong pair.
                if (abs(x - y) <= min(x, y)) {
                    // Update the maximum XOR value.
                    ans = max(ans, x ^ y);
                }
            }
        }
        return ans;  // Return the maximum XOR value of strong pairs.
    }
};
