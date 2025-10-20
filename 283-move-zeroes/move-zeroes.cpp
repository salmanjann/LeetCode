class Solution {
public:

    void swap(int &a, int &b){
        int temp = a;
        a = b;
        b= temp;
    }
    void moveZeroes(vector<int>& nums) {
        for(int i=0; i<nums.size();i++){
            if(nums[i]!=0)
                continue;
            for(int j=i+1; j<nums.size();j++){
                if(nums[j] != 0){
                    swap(nums[i],nums[j]);
                    break;      
                }
            }
        }
    }
};