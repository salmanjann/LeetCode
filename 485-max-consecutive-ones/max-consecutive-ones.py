class Solution:
    def findMaxConsecutiveOnes(self, nums: list[int]) -> int:
        curr = 0
        best = curr
        
        for right in range(0,len(nums)):
            if nums[right] == 0:
                best = max(best, curr)
                curr = 0
                continue
            curr += 1

        best = max(best, curr)
        return best