class Solution(object):
    def isPowerOfFour(self, num):
        """
        :type num: int
        :rtype: bool
        """
        if num <= 0: return False
        if num == 1: return True
        
        one = 0
        for b in bin(num - 1)[2:]:
            if b is '0':
                return False
            one += 1
        
        return one % 2 == 0
        
