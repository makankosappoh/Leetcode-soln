class Solution {
public:
//A "lucky integer" is defined as a number in the array whose frequency (how many times it appears) is equal to its value.
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> freq;//hashmap to count freq and kety values
        for (int num : arr) {
            freq[num]++;
        }
        int lucky = -1; //initialize normal lucky as to eturn -1 if no lucky
        for (const auto& [num, count] : freq) {
            if (num == count && num > lucky) { //check no. having freq == value
                lucky = num;
            }
        }
        return lucky;
    }
};