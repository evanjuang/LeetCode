# A XOR A = 0 
# ((2^2)^(1^1)^(4^4)^(5)) => (0^0^0^5) => 5
class Solution(object):
    def singleNumber(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        res = 0
        for i in nums:
            res ^= i
        
        return res
