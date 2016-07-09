/*
 * 16:10000b 
 * (10000)&(01111) = 0
 */

class Solution(object):
    def isPowerOfTwo(self, n):
        """
        :type n: int
        :rtype: bool
        """
        return n > 0 and not (n & n-1)
