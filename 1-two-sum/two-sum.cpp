class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();

        vector<int> answer(2);

        for(int i=0; i<n-1; i++){
            for(int j= i+1; j<n; j++){
                if(nums[i] + nums[j] == target){
                    answer[0] = i;
                    answer[1] = j;
                    break;
                }
            }
        }

        return answer;
    }
};