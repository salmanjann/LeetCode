class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long n = nums.size();
        long long nSubArrays = 0; 

        long long count = 0; 
        for(long long i=0; i<n; i++){
            if(nums[i] == 0){
                count++;
            }
            else{
                nSubArrays += (count * (count +1)) / 2;

                count = 0;
            }

        }
        nSubArrays += (count * (count +1)) / 2;

        return nSubArrays;
    }
};