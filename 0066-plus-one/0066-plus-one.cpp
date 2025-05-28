class Solution {
public:
//already given testcase , if [9] then new becomes 9 + 1= 10 or 1,0 so if loop condition given
//just need to check last no. ad increment by 1 and return array
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i = n - 1; i >= 0; --i){//traverse form last element bcz all things done from last
            if(digits[i] == 9){
                digits[i] = 0;
            }else{
                digits[i]++;
                return digits;
            }
        }
    //if first elemetn also 9 , we have to insert an extra 1 so that it becomes 10 or 1,0 array
    digits.insert(digits.begin(), 1);
    return digits;
    }
};