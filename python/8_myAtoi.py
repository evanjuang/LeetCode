class Solution(object):
    def myAtoi(self, str):
        """
        :type str: str
        :rtype: int
        """
        s = str.strip()
        if len(s) == 0:
            return 0

        MAX_INT = 2**31 - 1
        MIN_INT = -2**31
        
        sign = 1
        i = 0
        if s[0] in "-+":
            if (s[0] == '-'):
                sign = -1;
            i = 1
        
        val = 0
        for i in xrange(i, len(s)):
            if s[i].isdigit():
                val = val * 10 + ord(s[i]) - ord('0')
            else:
                break

        val = sign * val
        
        if val > MAX_INT:
            return MAX_INT
        elif val < MIN_INT:
            return MIN_INT
        else:
            return val
