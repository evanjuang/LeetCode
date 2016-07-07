# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def rotateRight(self, head, k):
        """
        :type head: ListNode
        :type k: int
        :rtype: ListNode
        """
        count = fast = slow = head
        len = 0
        
        if head is None or head.next is None or k == 0:
            return head
        
        while count:
            len += 1
            count = count.next

        k = k % len
        if k == 0:
            return head

        while k and fast.next:
            fast = fast.next
            k-=1
            
        while fast.next:
            slow = slow.next
            fast = fast.next

        new_head = slow.next
        slow.next = None
        fast.next = head
    
        return new_head
