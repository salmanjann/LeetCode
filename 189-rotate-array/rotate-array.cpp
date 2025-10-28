class Solution {
public:
    void swap(int &a, int &b){
        int temp = a;
        a = b;
        b = temp;
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k= k%n;
        
        // Reverse the whole array
        for(int i=0,j=n-1; i<n/2 ; i++,j--)
            swap(nums[i],nums[j]);

        // Reverse first k elements
        for(int i=0,j=k-1; i<k/2 ; i++,j--)
            swap(nums[i],nums[j]);

        // Reverse last elements
        for(int i=k,j=n-1; i<(n+k)/2 ; i++,j--)
            swap(nums[i],nums[j]);

    }
};