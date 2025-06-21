class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double windowSum = 0;
        double maxAvg = 0;

        // first window sum (ik too slow to calculate this)
        for(int i=0; i<k; i++)
            windowSum += nums[i];

        maxAvg = windowSum / k;

        for(int i=0;i<nums.size() -k;i++){
            windowSum  =  windowSum - nums[i] + nums[i+k];
            if(windowSum / k > maxAvg){
                maxAvg= windowSum /k;
            }
        }

        return maxAvg;
    }
};