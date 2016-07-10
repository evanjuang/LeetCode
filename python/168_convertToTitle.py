# n-1: 26 -> Z 
class Solution(object):
    def convertToTitle(self, n):
        """
        :type n: int
        :rtype: str
        """
        title = []
        
        while n > 0:
            title.append(chr((n - 1) % 26 + ord('A')))
            n = (n - 1) / 26
        print title
        return ''.join(title[::-1])
        
