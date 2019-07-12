/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    priority_queue <int, vector<int>, greater<int>> q;
    for(int i=0; i<A.size(); i++) {
        ListNode* temp = A[i];
        while(temp != NULL) {
            q.push(temp->val);
            temp = temp->next;
        }
    }
    
    ListNode* ans;
    ListNode* new_node = new ListNode(q.top());
    ans = new_node;
    q.pop();
    
    ListNode* temp = ans;
    while(!q.empty()) {
        ListNode* new_node = new ListNode(q.top());
        temp->next = new_node;
        temp = temp->next;
        q.pop();
    }
    return ans;
}
