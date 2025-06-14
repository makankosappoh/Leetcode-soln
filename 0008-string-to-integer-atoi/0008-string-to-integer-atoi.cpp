class Solution {
public:
//convert string to integer alongside removing " " spaces and handling +,- signs, non numeric characters like @/!_ etc and INT OVERFLOW/UNDERFLOW
    int myAtoi(string s) {
        int i = 0; //initialize a pointer i to track every char of string
        int sign = 1; // initially sign to be 1 to given same ouput multiplying with res
        long ans  = 0; //current ans is nothing
//if ' ' space occur, ignore them move forward,after moving forward if i equal to size return whole string for further manipulations
        while (i < s.size() && s[i] == ' ') i++;
        if (i == s.size()) return 0;
//if -ve sign then change sign form 1 to -1 to get -ve number after multiplying sign to ans or else if + then ignore it remain already initialized sign 1 and move i++
         if (s[i] == '-') { 
            sign = -1; 
            i++; 
        }
        else if (s[i] == '+') i++;
//Loop continues while index 'i' is within bounds and current character is a digit. In each iteration, shift the current ans left (multiply by 10) and add the numeric value of s[i]. (ans = ans*10 + (s[i] - '0') This is the core logic to build the number digit by digit)
//after that also handle OVERFLOW/UNDERFLOW conditions and return exact constraints required not much greater not much less than constraints.
        for (; i < s.size() && isdigit(s[i]); i++) {
            ans = ans*10 + (s[i] - '0');
            if(sign * ans > INT_MAX) return INT_MAX;
            if(sign * ans < INT_MIN) return INT_MIN;
        }
        return (int)(sign * ans);
    }
};