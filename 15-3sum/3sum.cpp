class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> answer;
        int i = 0;
        sort(nums.begin(), nums.end());

        int left, right;

        // for (int i = 0; i < n; i++)
        //     cout << nums[i] << " " ;

        for (int start = 0; start < n - 2; start++) {
            while(start < n-2 && start > 0 && nums[start] == nums[start-1] )
                start++; 
            left = start + 1;
            right = n - 1;

            // cout << "before" << endl;
            // cout << nums[start] << " " << nums[left] << " " << nums[right]
            //      << endl;

            while (left < right) {
                if (nums[start] + nums[left] + nums[right] > 0) {
                    while (right > left && nums[right - 1] == nums[right])
                        right--;

                    right--;

                    // cout << "right" << endl;
                    // cout << nums[start] << " " << nums[left] << " "
                    //      << nums[right] << endl;
                } else if (nums[start] + nums[left] + nums[right] < 0) {
                    while (left < right && nums[left + 1] == nums[left])
                        left++;

                    left++;
                    // cout << "left" << endl;
                    // cout << nums[start] << " " << nums[left] << " "
                    //      << nums[right] << endl;
                } else {
                    answer.push_back(vector<int>());
                    answer[i].push_back(nums[start]);
                    answer[i].push_back(nums[left]);
                    answer[i].push_back(nums[right]);

                    // cout<<"Answer["<<i<<"] = ["<< nums[start] <<nums[left] <<nums[right] <<endl;

                    i++;
                    while (left < right && nums[left + 1] == nums[left])
                        left++;

                    left++;
                }
            }
        }

        return answer;
    }
};