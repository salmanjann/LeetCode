class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n = nums.size();

        int left = 0;
        int right = n - 1;

        int max = -1;
        int area = 0;

        while (left < right) {
            if(nums[left] <= nums[right]){
                area = nums[left] * (right - left );
                left++;
            }
            else{
                area = nums[right] * (right - left );
                right--;
            }

            if(max < area)
                max = area;
        }

        return max;
    }
};