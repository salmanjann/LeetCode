// X^n_Power_X_n
/*
  PROBLEM LINK ( MEDIUM )
  https://leetcode.com/problems/powx-n/description/
*/
// SOLUTION
class Solution {
public:
    double myPow(double x, int n) {
        double result=1;
        if(x == 1 )
            result = 1;
        else if( x== -1 && n%2 ==1)
            result = -1;
        else if( x== -1 && n%2 ==0)
            result = 1;
        else if(n>1)
        {
            for(int i=0; i<n; i++)
            {
                if(result > INT_MAX /10 || (result == INT_MAX))
                    break;
                result *= x;
            }
        }
        else if(n==1 )
            result = x;
        else if(n==0)
            result = 1;
        else
        {
            bool isMin = false;
            if(n== INT_MIN)
            {
                isMin = true;
                n = n +1;
            }
            n = -n;
            for(int i=0; i<n; i++)
            {
                if(result > INT_MAX /10 || (result == INT_MAX))
                    break;
                result *= x;
            } 
            if(isMin)
                result *= x;
            result = 1 / result;           
        }

        return result;
    }
};
