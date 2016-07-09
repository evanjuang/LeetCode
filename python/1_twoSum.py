class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        num_dict = {}
        for i, n in enumerate(nums):
            if target-n in num_dict:
                return num_dict[target - n], i
            else:
                num_dict[n] = i
