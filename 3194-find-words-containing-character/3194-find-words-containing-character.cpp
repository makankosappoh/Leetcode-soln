class Solution {
public:
   // create empty vector array special type of array that can grow/shrink as we add elements
   // iterate loop each word index i then iterate each charactr index j,check i present in j = x?
   /*found then push_back index i  and break loop cause we dont need count how many times it occured just first time index it equals to x to result and return result*/
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector <int> result;
        for(int i = 0; i < words.size(); i++){
            for(int j = 0; j < words[i].size(); j++){
                if(words[i][j] == x){
                   result.push_back(i);
                   break;
                }
            }
        }
        return result;
    }
};