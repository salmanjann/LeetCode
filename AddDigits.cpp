// ADD DIGITS
/*
  PROBLEM LINK
  https://leetcode.com/problems/add-digits/description/
*/
// SOLUTION
class Solution {
public:
    int addDigits(int num) {
        int sum =0;
        while(true)
        {
            sum =0;
            do
            {
                sum += num %10;
                num /= 10;
            }while(num!= 0);
            if(sum > 9)
                num = sum;
            else
                break;
        }
        return sum;
    }
};
