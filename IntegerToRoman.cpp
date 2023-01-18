// INTEGER TO ROMAN ( MEDIUM PROBLEM )
/*
  PROBLEM LINK
  https://leetcode.com/problems/integer-to-roman/description/
*/
// SOLUTION
class Solution {
public:
    string intToRoman(int num) {
        int nMs = 0;
        string result = "";
        nMs = num / 1000;
        num = num % 1000;
        for(int i=0; i<nMs; i++)
            result += "M";
        int nCs = 0;
        nCs = num / 100;
        num = num %100;
        if(nCs == 9)
            result += "CM";
        else
        {
            if(nCs >= 5)
            {
                result += "D";
                nCs -= 5;
                for(int i=0;i<nCs; i++)
                    result += "C";
            }
            else if(nCs == 4)
                result += "CD";
            else
            {
                for(int i=0; i<nCs; i++)
                    result += "C";
            }
        }
        int nXs = 0;
        nXs = num / 10;
        num = num %10;
        if(nXs == 9)
            result += "XC";
        else
        {
            if(nXs >= 5)
            {
                result += "L";
                nXs -= 5;
                for(int i=0;i<nXs; i++)
                    result += "X";
            }
            else if(nXs == 4)
                result += "XL";
            else
            {
                for(int i=0; i<nXs; i++)
                    result += "X";
            }
        }
        if(num == 9)
            result += "IX";
        else
        {
            if(num >= 5)
            {
                result += "V";
                num -= 5;
                for(int i=0;i<num; i++)
                    result += "I";
            }
            else if(num == 4)
                result += "IV";
            else
            {
                for(int i=0; i<num; i++)
                    result += "I";
            }
        }
        return result;
    }
};
