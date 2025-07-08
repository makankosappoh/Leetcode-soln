class Solution {
public:
//to dtermine how many char in "guess" match exactly value and position of "bulls" and how many match in value but not in posisiton of "cows"
//hence We need to count the number of bulls and cows and return the result as a string like "xAyB"
//approach:
//first pass: count bulls by comparing characters and for for very match with "guess" increase bulls and decrease that char frequency in hashmapas its already matched 
//second pass: for every unmatched characterin "guess" if it exist in map(and not matched as a bull) count it as a cow and decrease the count in map to avoid recounting.
    string getHint(string secret, string guess) {
        int bulls = 0;
        int cows = 0;
        unordered_map<char,int> mp;
        // move secret char into hashmap
        for(char &ch : secret) mp[ch]++;
        //first pass
        for(int i = 0; i < secret.size(); i++){
            if(secret[i] == guess[i]){
                bulls++;
                mp[secret[i]]--;
            }
        }
        //second pass
        for(int i = 0; i < guess.size(); i++){
            if(mp[guess[i]] > 0 && guess[i] != secret[i]){
                cows++;
                mp[guess[i]]--;
            }
        }
        string ans = to_string(bulls)+"A"+to_string(cows)+"B";
        return ans;
    }
};