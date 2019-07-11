/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    if(!A) {
        return B;
    }
    if(!B) {
        return A;
    }
    
    ListNode *res;
    if(A->val <= B->val) {
        res = A;
        res->next = mergeTwoLists(A->next, B);
    } else {
        res = B;
        res->next = mergeTwoLists(B->next, A);
    }
    return res;
}
