class Solution:
    def longestSubarray(self, nums: list[int]) -> int:
        curr = 0
        best = 0

        rem = 1

        left = 0
        for right in range(0,len(nums)):
            if nums[right] == 0 and rem == 0:
                while nums[left] == 1:
                    left += 1
                    curr -= 1

                rem += 1
                left += 1
                curr -= 1
            if nums[right] == 0 and rem > 0:
                rem -= 1
            curr += 1
            best = max(best,curr)

        best = max(best,curr)
        
        best -= 1
        return best
