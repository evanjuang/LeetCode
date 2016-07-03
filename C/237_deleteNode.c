/**
 *  Write a function to delete a node (except the tail) in a singly linked list, given only access to that node.
 *
 * Supposed the linked list is 1 -> 2 -> 3 -> 4 and you are given the third node with value 3, 
 * the linked list should become 1 -> 2 -> 4 after calling your function. 
 * 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode* node) {
    struct ListNode *temp = NULL;
    
    if (node) {
        if (node->next) {
            temp = node->next;
            // copy data of next node
            node->val = temp->val;
            node->next = temp->next;
            free(temp);
        }
    }
}

