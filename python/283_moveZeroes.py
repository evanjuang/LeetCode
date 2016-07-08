class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: void Do not return anything, modify nums in-place instead.
        """
        nonzero = 0
        for i in nums:
            if i != 0:
                nums[nonzero] = i
                nonzero += 1
                
        nums[nonzero:] = [0] * (len(nums) - nonzero)
