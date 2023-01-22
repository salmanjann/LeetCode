// PIVOT INDEX 
/*
  PROBLEM LINK
  https://leetcode.com/problems/find-pivot-index/description/?envType=study-plan&id=level-1
 */
// SOLUTION
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int index = -1;
        int leftSum = 0, rightSum =0;
        for(int i=0; i<nums.size();i++)
        {
            for(int j= nums.size() -1; j>i; j--)
            {
                rightSum += nums[j];
            }
            if(leftSum == rightSum)
            {
                index = i ;
                break;
            }
            leftSum += nums[i];

            rightSum = 0;
        }
        return index;
    }
};
