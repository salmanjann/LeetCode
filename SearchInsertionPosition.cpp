// Search Insertion Position
/*
  Problem Link
  https://leetcode.com/problems/search-insert-position/description/
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index =-1;
        bool isEntered = false;
        for(int i= 0; i<nums.size();i++)
        {
            if(nums[i]== target || nums[i]> target)
            {
                isEntered = true;
                index = i;
                break;
            }
        }
        if(!isEntered)
            index = nums.size();
        return index;
    }
};
