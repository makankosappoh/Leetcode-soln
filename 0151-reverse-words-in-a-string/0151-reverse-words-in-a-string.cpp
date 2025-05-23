class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string final = "";//empty string to fill final answer from sample
        reverse(s.begin(), s.end());//rev string eg- hey you -> uoy yeh

        for(int i = 0; i < n; i++){
            string sample = "";//create a sample for correcting each rev substring from s
            while(i < n && s[i] != ' '){ //catch substring till space enquired
                sample = sample + s[i]; //eg: it cathces 'uoy' substring into smple string
                i++;// increment till each subword in s
            }
            reverse(sample.begin(), sample.end()); //rev each word in sample 
            //eg. first encountered uoy -> rev to -> you
            if(sample.size() > 0){
                final += " "+ sample; //add each first encountered word to final with spacing
                //eg: final = " you"
                //then 2nd increment 
                //final = " hey you" 
            }
        }
     return final.substr(1); //finally return final = "hey you" auto correcting first index first index extra spaces
    }
};