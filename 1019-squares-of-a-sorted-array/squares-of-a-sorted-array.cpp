class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();
        vector<int> answer(n);

        int i=n-1;
        int left = 0;
        int right = n -1;

        while(left <= right){
            if(abs(nums[left]) >=  abs(nums[right])){
                answer[i--] = nums[left] * nums[left];
                left++;
            }
            else{
                answer[i--] = nums[right] * nums[right];
                right--;
            }
        }

        return answer;
    }
};