class Solution {
public:
//easy approach
//pre-builds lookup arrays for each place value to quickly retrieve the Roman numeral part.then string roman declared such that it extracts each type thousand /tnes hundred/ones fprm num and return corresponding roman numeral.
    string intToRoman(int num) {
        // Predefined Roman numerals for ones place (0 to 9)
        string ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        // Predefined Roman numerals for tens place (0 to 90)
        string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        // Predefined Roman numerals for hundreds place (0 to 900)
        string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        // Predefined Roman numerals for thousands place (0 to 3000)
        string thousands[]= {"", "M", "MM", "MMM"};
        
        string Roman = thousands[num / 1000] + // extracts thousands digit
               hundreds[(num % 1000) / 100] +  // extracts hundreds digit
               tens[(num % 100) / 10] +        // extracts tens digit
               ones[num % 10];                 // extracts ones digit
        return Roman;
    }
};
//example:
/*
1987:
thousands[extract 1] → "M"
hundreds[extract 9] → "CM"
tens[extract 8] → "LXXX"
ones[extract 7] → "VII"
Result: "MCMLXXXVII"
*/
