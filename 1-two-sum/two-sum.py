class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        ans = [0,1]

        for i in range(0,len(nums) -1):
            for j in range(i+1, len(nums)):
                if nums[i] + nums[j] == target:
                    ans[0] = i
                    ans[1] = j

                    return ans
        
        return ans