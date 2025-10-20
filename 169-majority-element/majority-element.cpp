class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Freaking Moore Algo, who can think of it at runtime?
        int candidate = nums[0];
        int count =1;

        for(int i=1;i<nums.size();i++){
            if(count == 0)
                candidate = nums[i];
            
            if(nums[i] == candidate)
                count++;
            else
                count--;
        }

        return candidate;

    }
};