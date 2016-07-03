# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def mergeTwoLists(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        new_list = new_node = ListNode(-1)

        while l1 and l2:
            if l1.val <= l2.val:
                new_node.next = l1
                l1 = l1.next
            else:
                new_node.next = l2
                l2 = l2.next
            
            new_node = new_node.next
            
        if l1 or l2:
            new_node.next = l1 or l2
            
        return new_list.next
