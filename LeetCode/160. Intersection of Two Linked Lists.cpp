/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *first = headA;
        ListNode *second = headB;

        if (!first || !second) return NULL;

        while (first && second && first != second) {
            first = first->next;
            second = second->next;

            if (first == second) {
                return first;
            }

            if(!first) {
                first = headB;
            }
            if(!second) {
                second = headA;
            }
        }

        return first;
    }
};
