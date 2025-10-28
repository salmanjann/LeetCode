class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long n = nums.size();
        long long nSubArrays = 0; 

        bool isSubStart = false;
        long long count = 0; 
        for(long long i=0; i<n; i++){
            if(!isSubStart && nums[i] == 0){
                isSubStart = true;
                count++;
                nSubArrays += count;
            }
            else if (isSubStart && nums[i] == 0){
                count++;
                nSubArrays += count;
            }
            else if (isSubStart && nums[i] != 0){
                count = 0;
                isSubStart = false; 
            }

        }

        return nSubArrays;
    }
};