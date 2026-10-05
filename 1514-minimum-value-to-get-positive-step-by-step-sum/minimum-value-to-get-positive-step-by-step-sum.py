class Solution:
    def minStartValue(self, nums: list[int]) -> list[int]:
        runSum = [0] * len(nums)
        runSum[0] = nums[0]

        best = nums[0]

        for i in range(1,len(nums)):
            runSum[i] = runSum[i-1] + nums[i]
            # print(runSum[i])
            best = min(best, runSum[i])
            # print("best here ", best)
        if best > 0:
            return 1
        else:
            return abs(best) + 1