/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode* cur = NULL;
    struct ListNode* temp = NULL;
    
    if (head == NULL)
        return NULL;
        
    cur = head;
    while(cur->next) {
        if (cur->val == cur->next->val) {
            temp = cur->next;
            cur->next = cur->next->next;
            free(temp);
        }
        else
            cur = cur->next;
    }
    
    return head;
}
