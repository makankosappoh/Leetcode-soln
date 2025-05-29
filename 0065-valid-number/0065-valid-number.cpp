class Solution {
public:
// a no. in format is    +or- digit .digit eorE +or- digit
//example ideal case/nothing optional +12.4e+45 
/* with constartints  1) +/- optional on start and before last digit end ex: -0.e1,+2e5,2e-2
                      2) atleast one digit before or after decimal example- 2. , .2 , 2.0
                      3) e/E optional before last digits ex: -0.1,-.9
                      4) atleast end with one digit at last place */
/* 0 => start
   1 => (+/-)
   2 => num before decimal
   3 => decimal
   4 => num after decimal
   5 => exponent
   6 => (+/-) after exponent
   7 => num after exponent */
    bool isNumber(string s) {
        int n = s.size();
        int check = 0;
        bool decimal_flag = false;
        for(auto c: s){
            if(c == '+' || c == '-'){
                if(check == 0){check = 1;}
                else if(check == 5){check = 6;}
                else{return false;}
         
            }else if(c == 'e'|| c == 'E'){
                if(check <= 4 && check != 0 && check != 1){check = 5;}
                else{return false;}
            }else if (c == '.'){
                if(check <= 2){
                    if(check == 0 || check == 1){decimal_flag = true;}
                    check = 3;
                }else{return false;}
            }else if( c <=57 && c >=48){
                if(check <=2){check = 2;}
                else if(check == 3){check = 4; decimal_flag = false;}
                else if(check == 4){check = 4;}
                else if(check == 5 || check == 6 || check == 7){check = 7;}
                else{return false;}
            }else {
                return false;
            }
        }
        if(decimal_flag == true){
            return false;
        }
        return (check == 2 || check == 3 || check == 4 || check == 7);
    }
};