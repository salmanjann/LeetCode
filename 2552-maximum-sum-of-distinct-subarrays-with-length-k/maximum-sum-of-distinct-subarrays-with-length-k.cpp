class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();

        long long maxSum = 0;
        long long currentSum = 0;

        unordered_map<int, int> freq;
        int dupCount = 0;
        int left = 0;
        int element;

        // Process first K elements
        for (int right = 0; right < k; right++) {
            element = nums[right];
            currentSum += element;
            if (freq.count(element)) {
                freq[element]++;
                if (freq[element] > 1)
                    dupCount++;
            } else
                freq[element] = 1;
        }
        if (!dupCount)
            if (currentSum > maxSum)
                maxSum = currentSum;

        for (int right = k; right < n; right++) {
            currentSum -= nums[left];
            freq[nums[left]]--;
            if (freq[nums[left]] > 0)
                dupCount--;
            left++;

            // Adding right to window
            currentSum += nums[right];
            if (freq.count(nums[right])) {
                freq[nums[right]]++;
                if (freq[nums[right]] > 1)
                    dupCount++;
            } else
                freq[nums[right]] = 1;
            if (!dupCount)
                if (currentSum > maxSum)
                    maxSum = currentSum;
        }

        return maxSum;
    }
};