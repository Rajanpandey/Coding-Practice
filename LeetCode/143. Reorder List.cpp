/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        
        while (fast->next && fast->next->next) {
            slow = slow->next;
            fast = fast->next->next;
        }
        
        ListNode* l2 = reverse(slow->next);
        slow->next = NULL;
        
        merge(head, l2);
    }
    
    ListNode* reverse(ListNode* curr) {
        ListNode* prev = NULL;
      
        while (curr) {
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
      
        return prev;
    }
    
    void merge(ListNode* head1, ListNode* head2) {
        while (head2) {
            ListNode* next = head1->next;
            head1->next = head2;
            head1 = head2;
            head2 = next;
        }
    }
};
