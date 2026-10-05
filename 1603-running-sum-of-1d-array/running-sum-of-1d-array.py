class Solution:
    def runningSum(self, nums: list[int]) -> list[int]:
        runSum = [0] * len(nums)

        runSum[0] = nums[0]

        for i in range(1,len(nums)):
            runSum[i] = runSum[i-1] + nums[i]

        return runSum