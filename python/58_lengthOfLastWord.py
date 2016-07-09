class Solution(object):
    def lengthOfLastWord(self, s):
        """
        :type s: str
        :rtype: int
        """
        #s = s.split()
        #if len(s):
        #    return len(s[-1])
        
        #return 0
        return len(s.strip().split(" ")[-1]);
