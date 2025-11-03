class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> answer;

        int left, right, i = 0;

        int w, x, y, z;
        for (int a = 0; a < n - 3; a++) {
            w = nums[a];
            while (a > 0 && a < n - 3 && w == nums[a - 1]) {
                a++;
                w = nums[a];
            }
            for (int b = a + 1; b < n - 2; b++) {
                x = nums[b];
                while (b - 1 != a && b < n - 2 && x == nums[b - 1]) {
                    b++;
                    x = nums[b];
                }
                left = b + 1;
                right = n - 1;

                while (left < right) {
                    y = nums[left];
                    z = nums[right];

                    long long sum = w + x;
                    sum += y;
                    sum += z;
                    if (sum > target) {
                        while (right > left && nums[right - 1] == z)
                            right--;

                        right--;
                    } else if (sum < target) {
                        while (left < right && nums[left + 1] == y)
                            left++;

                        left++;
                    } else {
                        answer.push_back(vector<int>());
                        answer[i].push_back(w);
                        answer[i].push_back(x);
                        answer[i].push_back(y);
                        answer[i].push_back(z);

                        i++;
                        while (left < right && nums[left + 1] == y)
                            left++;

                        left++;
                    }
                }
            }
        }

        return answer;
    }
};