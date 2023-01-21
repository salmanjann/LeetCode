// RUNNING SUM IN 1D ARRAY
/*
  PROBLEM LINK
  https://leetcode.com/problems/running-sum-of-1d-array/description/?envType=study-plan&id=level-1
 */
// SOLUTION
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for(int i=1; i<nums.size(); i++)
            nums[i] = nums[i-1] + nums[i];
        return nums;
    }
};
