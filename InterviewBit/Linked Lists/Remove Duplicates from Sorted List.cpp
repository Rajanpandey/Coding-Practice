/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* curr = A;
    while(curr->next != NULL) {
        ListNode* temp = curr->next;
        while(curr->val == temp->val) {
            if(temp->next == NULL){
                curr->next = NULL;
                return A;
            }
            temp = temp->next;
        }
        curr->next = temp;
        curr = temp;
    }
    return A;
}
