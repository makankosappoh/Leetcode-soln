class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp ={ //<key, value>
            {'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}   
        };
        if(s.empty()) {
            return 0;
        }
        int roi = 0; //value to store final int converted values
        for(int i = 0; i < s.size(); i++){
            //check i < lenght + 1 to avoid s[i + 1] when last index 
            //if current mp vlue less than next like in IV I < X then subract I value from X 
            //because its given in Q I can be placed before V (5) and X (10) to make 4 and 9.
            //else if not then do opposite proceess by adding and return roi
            /*
            example: s = "MCMXCIV" 
            M = 1000
            → Next is 'C' (100), and 1000 > 100
            → Add result = 0 + 1000 = 1000 
            C = 100
            → Next is 'M' (1000), and 100 < 1000
            → Subtract result = 1000 - 100 = 900 
            M = 1000
            → Next is 'X' (10), and 1000 > 10
            → Add result = 900 + 1000 = 1900 
            X = 10
            → Next is 'C' (100), and 10 < 100
            → Subtract result = 1900 - 10 = 1890  
            C = 100
            → Next is 'I' (1), and 100 > 1
            → Add result = 1890 + 100 = 1990 
            I = 1
            → Next is 'V' (5), and 1 < 5
            → Subtract result = 1990 - 1 = 1989 
            V = 5
            → No next element
            → Add result = 1989 + 5 = 1994 
            FINAL ANS = 1994
            */
            if( i < s.size() - 1 && mp[s[i]] < mp[s[i + 1]]){
                roi -= mp[s[i]];
            }else{
                roi += mp[s[i]];
            }
        }
        return roi;
    }
};