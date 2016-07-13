# n&n(n - 1) will remove the lowest "1" bit
class Solution(object):
    def countBits(self, num):
        """
        :type num: int
        :rtype: List[int]
        """
        res = [0]
        for i in xrange(1, num + 1):
            res.append(res[i&(i-1)] + 1)
        
        return res
