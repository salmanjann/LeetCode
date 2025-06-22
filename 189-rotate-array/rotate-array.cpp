class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        if(size <=1)
            return;

        k %= size;
        int left = 0;
        int right = size - 1;
        int temp;

        // 1- rotate the whole array
        while (left < right) {
            temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;

            left++;
            right--;
        }

        

        // 2- Rotate first K elements

        left = 0;
        right = k - 1;

        while (left < right) {
            temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;

            left++;
            right--;
        }

        

        // 3- Rotate last elements

        left = k;
        right = size - 1;

        // cout << "left " << left << endl;
        // cout << "right " << right << endl;

        while(left<right){
            temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;

            left++;
            right--;
        }
    }
};