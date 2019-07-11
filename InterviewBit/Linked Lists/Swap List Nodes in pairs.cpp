/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    ListNode* curr = A;
    
    while(curr != NULL && curr->next != NULL) {
        int temp = curr->next->val;
        curr->next->val = curr->val;
        curr->val = temp;
        curr = curr->next->next ;
    }
    return A;
}
