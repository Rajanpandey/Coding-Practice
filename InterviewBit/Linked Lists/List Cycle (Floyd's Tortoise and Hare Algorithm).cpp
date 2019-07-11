/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* A) {
    ListNode *slow = A;
    ListNode *fast = A;
    while(slow != NULL && fast != NULL) {
        slow = slow->next;
        if(fast->next == NULL) {
            return NULL;
        } else {
            fast = fast->next->next;
        }
        if(slow == fast) {
            break;
        }
    }
    
    if(slow == NULL || fast == NULL){
        return NULL;
    }
    
    ListNode* curr = A;
    while(curr != slow){
        curr = curr->next;
        slow = slow->next;
    }
    
    return curr;
}
