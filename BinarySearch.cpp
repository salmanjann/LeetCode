// BINARY SEARCH
/*
  PROBLEM LINK
  https://leetcode.com/problems/binary-search/?envType=study-plan&id=level-1
*/
// SOLUTION
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int first=0, mid=-1, end;
        end = nums.size() -1;
        while(first <= end)
        {
            mid = (first + end) /2;
            cout<<mid<<endl;
            if(nums[mid] == target)
                return mid;
            else if(nums[mid]<target)
                first = mid +1;
            else if(nums[mid]>target)
                end = mid -1;
        }
        return -1;
        
    }
};
