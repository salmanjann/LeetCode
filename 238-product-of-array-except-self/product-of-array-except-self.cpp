class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n);

        int product = 1;

        // First store the prefix product
        for(int i=0; i<n;i++){
            answer[i] = product;
            product *= nums[i];
        }

        product = 1;
        // Multiply the suffix from end
        for(int i=n-1;i>=0; i--){
            answer[i] *= product;
            product *= nums[i];
        }

        return answer;
    }
};