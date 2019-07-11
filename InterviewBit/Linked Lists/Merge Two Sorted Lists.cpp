/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* ans;
    
    // List ans starts with the smaller element of the two lists
    if(A->val < B->val) {
        ans = A;
        A = A->next;
    } else {
        ans = B;
        B = B->next;
    }
    
    // Temp continues ans list forward
    ListNode* temp = ans;
    while(A != NULL && B != NULL) {
        if(A->val < B->val) {
            temp->next = A;
            A = A->next;
        } else {
            temp->next = B;
            B = B->next;
        }
        temp = temp->next;
    }
    
    // A or B has reached end. Fill rest of the list as it is
    if(A != NULL) {
        temp->next = A;
    }
    if(B != NULL) {
        temp->next = B;
    }
    return ans;
}