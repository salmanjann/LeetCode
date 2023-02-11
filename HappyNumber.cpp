// HAPPY NUMBER
/*
  PROBLEM LINK
  https://leetcode.com/problems/happy-number/description/
*/
// SOLUTION
class Solution {
public:
    bool isHappy(int n) {
        int sum =0;
        int r;
        while(sum!=1){
            sum=0;
            do{
                r = n%10;
                sum = sum + (r*r);
                n/=10;
            }while(n!=0);
            if(sum!=1)
                n = sum;
            if(sum == 4)
                return false;
        }
        return true;
    }

};
