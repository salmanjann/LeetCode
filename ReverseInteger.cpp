/*
  Problem Link
  https://leetcode.com/problems/reverse-integer/description/
*/
class Solution {
public:
    int reverse(int x) {
        int reversed =0, digit;
        do{
            digit = x%10;
            if(reversed  > INT_MAX /10 || reversed  < INT_MIN /10 || (reversed == INT_MAX && digit >7) || (reversed == INT_MIN && digit >8))
                return 0;
            reversed = (reversed * 10) + digit;
            x/=10;
        }while(x!=0);
        
        return reversed;
    }
};
