/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode *temp = node->next;
    
    // copy data of next node
    node->val = node->next->val;
    node->next = node->next->next;
    free(temp);
}
