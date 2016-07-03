/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode new_list;
    new_list.val = 0;
    new_list.next = NULL;

    struct ListNode *node = &new_list;
    
    while(l1 && l2) {
        if (l1->val <= l2->val) {
            node->next = l1;
            l1 = l1->next;
        } else {
            node->next = l2;
            l2 = l2->next;
        }
        
        node = node->next;
    }
    
    node->next = (l1 != NULL) ? l1 : l2;

    return new_list.next;
}
