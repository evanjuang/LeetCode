# All non-happy numbers follow sequences that reach the cycle:
# 4, 16, 37, 58, 89, 145, 42, 20, 4, ... 

class Solution(object):
  def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        Hash = {}

        while n != 1:
            if n in Hash: 
                return False
            else: 
                Hash[n] = True
            
            n = sum([pow(int(c) , 2) for c in str(n)])
        
        return True
