// Remove all occurences of an element from array
/*
  problem link
  https://leetcode.com/problems/remove-element/description/
*/
// SOLUTION
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //nVals means there are n number of val entries in nums
        int nVals = 0;
        for(int i=0; i<nums.size();i++)
            if(nums[i] == val)
                nVals++;
        //traversing the whole array, and where the value is found it will be swapped with its right element
        for(int i=0; i<nums.size();i++){
            if(nums[i] == val)
            {
                // swap if there is one more element
                if(i+1 < nums.size())
                {
                    // swap with right element where the right element not equals val
                    for(int j=i+1; j<nums.size();j++)
                    {
                        if(nums[j]!= val)
                        {
                            // swap
                            int temp = nums[j];
                            nums[j] = val;
                            nums[i] = temp;
                            break;
                        }
                    }

                }
            }
        }
        return nums.size() - nVals;
    }
};
