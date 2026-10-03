class Solution:
    def sortedSquares(self, nums: list[int]) -> list[int]:
        ans = [0] * len(nums)

        left , right = 0, len(nums) -1

        index = right

        while left <= right:
            left_val = abs(nums[left])
            right_val = abs(nums[right])

            if left_val > right_val:
                ans[index] = left_val * left_val
                index -= 1
                left += 1
            
            else:
                ans[index] = right_val * right_val
                index -= 1
                right -= 1

        return ans