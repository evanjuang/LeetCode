/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *fast = head;
    struct ListNode *slow = head;
    
    while(fast && slow && fast->next) {
        fast = fast->next->next;
        slow = slow->next;
        
        if (fast == slow)
            return true;
    }
    
    return false;
}
