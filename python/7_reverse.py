class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """
        if x>=0:
            res = int(str(x)[::-1])
        else:
            res = int('-' + str(x)[:0:-1])
        
        return res if -2147483648 <= res <= 2147483647 else 0
