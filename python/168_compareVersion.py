class Solution(object):
    def compareVersion(self, version1, version2):
        """
        :type version1: str
        :type version2: str
        :rtype: int
        """
        v1 = map(int, version1.split('.'))
        v2 = map(int, version2.split('.'))
        l1, l2 = len(v1), len(v2)

        for i in xrange(max(l1, l2)):
            ver1 = v1[i] if i < len(v1) else 0
            ver2 = v2[i] if i < len(v2) else 0
        
            if ver1 > ver2:
                return 1
            elif ver1 < ver2:
                return -1
        return 0
