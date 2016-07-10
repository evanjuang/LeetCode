class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0: return False
        if x < 10: return True
        
        y, tmp = 0, x

        while tmp:
            y = 10 * y + tmp % 10
            tmp //= 10
        return x == y
