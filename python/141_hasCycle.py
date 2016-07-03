# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def hasCycle(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        first = slow = head
        
        while first and slow and first.next:
            first = first.next.next
            slow = slow.next

            if first is slow:
                return True
        
        return False
