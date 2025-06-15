class Solution {
public:
//return a - b for a be most max value replacing num by 9 digit and b be most min vaue as samll as possible either replacing with 1 or 0 avoiding leading zeros
//we have used so many for/if loops that can be replaced by replace(begin(), end()) but plz avoid to have a concurrent learning

    int maxDiff(int num) {
        //use of strings for easy calculation/replacements
        string s = to_string(num);
        string a = s; //max 
        string b = s; //min
        //max replacements
        for(char c : s){
            if(c != '9'){ // find first digit not '9'
                for(char &ch : a){ // replace all occurance of digit with '9'
                    if(ch == c) ch = '9';
                } break;
            }
        }
        //min replacement
        // if frst digit is not '1' replace all of it '1'
        // never intitlaize s[0] be '0' avoid leading zero
        if(s[0] != '1'){ 
            char to_replace = s[0];
            for(char &ch : b){
                 if(ch == to_replace) ch = '1';
            }
        }else{
        //if first digit is already '1' find next digit not equal 0 or 1 to replace with 0
            for(int i = 1; i < s.size(); i++){
                if(s[i] != '0' && s[i] != '1'){
                    char to_replace = s[i];
                    for(char &ch : b){
                        if(ch == to_replace) ch = '0';
                    }
                    break;
                } 
            }
        }
        return stoi(a) - stoi(b);
    }
};