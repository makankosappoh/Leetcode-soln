class Solution {
public:
//we have to find max diff between freq of character with highest odd - lowest even freq of string s 
    int maxDifference(string s) {
        vector<int> freq(26,0); //freq vector arr of size 26 to store lowerc alphabet
        //with initially all vector lowercase alphabet freq be 0
        for (char c : s){ // Learn Counting frequency of each character in the string
            freq[c - 'a']++;
        }
        int odd = 0;// Max odd frequency
        int even = s.size();// Min even frequency (initialized to maximum possible)Initializing it to the the string length ensures that any even frequency we find will be smaller than the initial value, allowing us to correctly track the minimum
        for(int n : freq){
            if(n % 2 == 1) odd = max(odd,n);//if odd then update max odd
            else if(n != 0) even = min(even,n);//even and non zero update min even
        }
        return odd - even;//retrun max odd - min even
    }
};