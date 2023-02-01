// PLUS ONE
/*
  PROBLEM LINK
  https://leetcode.com/problems/plus-one/description/
*/
// SOLUTION
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        // if last digit is not equal to 9
        if(digits[digits.size()-1] != 9)
        {
            digits[digits.size()-1] = digits[digits.size()-1] +1;
            result = digits;
        }
        else
        {
            bool isFound = false;
            digits[digits.size()-1] = 0;
            for(int i=digits.size()-2; i>=0; i--)
            {
                if(digits[i] != 9)
                {
                    isFound = true;
                    digits[i] = digits[i] +1;
                    break;
                }
                else
                    digits[i] = 0;
            }
            if(!isFound)
                digits.insert(digits.begin(),1);
            result = digits;
        }
        return digits;
    }
};
