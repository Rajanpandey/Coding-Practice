/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    ListNode *first = A;
    ListNode *second = B;
    
    while(first != second) {
        if(first == NULL){
            first = B;
        } else {
            first = first -> next;
        }
        if(second == NULL) {
            second = A;
        } else {
            second = second -> next;
        }
    }
    return first;
}