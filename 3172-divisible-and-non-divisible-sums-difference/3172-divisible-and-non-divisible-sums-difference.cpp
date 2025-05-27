class Solution {
public:
//brute force already all conditions given just code and get soln
    int differenceOfSums(int n, int m) {
        int num1 = 0;
        int num2 = 0;
        for(int i = 1; i <= n; i++){
            if(i%m != 0){
                num1 += i;//num1 changes wrt i as if not divisible my m
            }else{
                num2 += i;//num2 changes wrt i as divisible by n
            }
        }
      return num1 - num2;
    }
};