// CLIMBING STAIRS
/*
  PROBLEM LINK
  https://leetcode.com/problems/climbing-stairs/description/
 */
// SOLUTION
class Solution {
public:
    int climbStairs(int n) {
        int firstNumber = 1;
        int secondNumber = 2;
        int nextNumber = firstNumber + secondNumber;
        int current = 0;
        for(int i=3; i<n ; i++)
        {
            firstNumber = secondNumber;
            secondNumber = nextNumber;
            nextNumber = firstNumber + secondNumber;
        }
        if(n== 2)
            return 2;
        else if( n== 1)
            return 1;
        return nextNumber;
    }
};
