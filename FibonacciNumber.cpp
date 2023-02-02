// FIBONACCI NUMBER
/*
  PROBLEM LINK
  https://leetcode.com/problems/fibonacci-number/description/?envType=study-plan&id=level-1
*/
// SOLUTION
class Solution {
public:
    int fib(int n) {
        if(n== 0)
            return 0;
        else if(n == 1)
            return 1;
        else if( n== 2)
            return 1;
        int firstNumber =1, secondNumber = 1, nextNumber;
        for(int i=3; i<= n;i++)
        {
            nextNumber = firstNumber + secondNumber;
            firstNumber = secondNumber;
            secondNumber = nextNumber;
        }
        return nextNumber;
    }
};
