class Solution:
    def waysToSplitArray(self, nums: list[int]) -> int:
        total = sum(nums)

        left = count = 0

        for i in range(0,len(nums) -1):
            left += nums[i]

            if left >= total - left:
                count +=1

        return count