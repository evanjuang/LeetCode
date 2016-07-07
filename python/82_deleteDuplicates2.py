# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def deleteDuplicates(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if head is None:
            return None
        
        dummy = ListNode(0)
        dummy.next = head
        node = dummy
        
        while node.next is not None and node.next.next is not None:
            if node.next.val == node.next.next.val:
                dup_val = node.next.val
                while node.next is not None and node.next.val == dup_val:
                    node.next = node.next.next
            else:
                node = node.next
        
        return dummy.next
