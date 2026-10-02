class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        ans = [0,1]

        # Complexity O(N^2)
        # for i in range(0,len(nums) -1):
        #     for j in range(i+1, len(nums)):
        #         if nums[i] + nums[j] == target:
        #             ans[0] = i
        #             ans[1] = j

        #             return ans
        
        dictionary = {}
        dictionary[nums[0]] = 0

        for i in range(1,len(nums)):
            if target - nums[i] in dictionary:
                ans[0] = i
                ans[1] = dictionary[target - nums[i]]

                return ans
            else:
                dictionary[nums[i]] = i
        return ans