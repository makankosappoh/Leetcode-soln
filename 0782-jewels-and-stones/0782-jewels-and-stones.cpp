class Solution {
public:
//easy just for loop read both hewels and stones, if stones present in jewels then return the no of time each element in stone occurs. or if none we returning int count = 0 already
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for (int i = 0; i < jewels.size(); i++){
            for(int j = 0; j < stones.size(); j++){
                if(jewels[i] == stones[j]){
                    count++;
                }
            }
        }
    return count;
    }
};