class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int prevSum = 0;
        vector<int> runningSum ;
        for(int i=0; i<nums.size();i++){
            runningSum.push_back(prevSum + nums[i]);
            prevSum += nums[i];
        }
        return runningSum;
    }
};