/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode dummy;
    struct ListNode *prev = &dummy;
    struct ListNode *cur = head;
    
    dummy.next = head;
    
    while(cur && cur->next) {
        prev->next = cur->next;
        cur->next = cur->next->next;
        prev->next->next = cur;
        
        prev = cur;
        cur = cur->next;
    }
    
    return dummy.next;
}
