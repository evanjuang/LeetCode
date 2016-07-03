/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode *temp = NULL;
    struct ListNode *cur = NULL;
    
    while(head && head->val == val) {
        temp = head;
        head = head->next;
        free(temp);
    }
    
    cur = head;
    while(cur) {
        if (cur->next && cur->next->val == val) {
            temp = cur->next;
            cur->next = temp->next;
            free(temp);
        } else 
            cur = cur->next;
    }
    
    return head;
