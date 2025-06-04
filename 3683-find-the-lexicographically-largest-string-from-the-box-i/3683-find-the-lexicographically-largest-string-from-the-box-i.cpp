class Solution {
public:
//first of all lexographic means order for the way words listed in dictionary
//by comparing each subdigit of string check order and length 
//eg: apple vs banan ...compare first index a and b...b comes after a so banana is lexographic
//eg: abc2 vs abc 10 .....abc ordef correct now although lenght of abc10 bigger but 2 comes after 1 so abc2 lexographic

//numfriends is integer showing how a string can be xut eg; if 2 then cut in 2 seperate pieces
//eg: 2 then abc cut into a,bc 2 seperate 
    string answerString(string word, int numFriends) {
        if(numFriends == 1){
            return word; //if cut is 1 that is no need for cut already lexoG
        }
        int n = word.size();
        string box = "";
        //word.substr(i, ...) takes a substring starting at index i
        //The length of that substring is decided by min(n - numsFriend + 1, n - i)
        //n - numsF + 1 is max cut length of substring and n - 1 till last element of substr
        //min() ensure no error in out of bounds
        //finally, max(box,wordstr(...)) picks the lexicographically greater string form and substr staring form i index
        for(int i = 0; i < n; i++){
            box = max(box, word.substr(i,min(n - numFriends + 1, n - 1)));
        }
    return box;
    }
};