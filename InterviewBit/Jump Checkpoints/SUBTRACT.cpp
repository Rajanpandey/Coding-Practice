/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::subtract(ListNode* A) {
    vector<int> vec;
    ListNode* temp = A;
    while(temp != NULL) {
        vec.push_back(temp->val);
        temp = temp->next;
    }
    
    int n = vec.size();
    for(int i=0; i<n/2; i++) {
        vec[i] = vec[n-1-i] - vec[i];
    }
    
    temp = A;
    int i = 0;
    int k = n/2;
    while(k--) {
        temp->val = vec[i];
        temp = temp->next;
        i += 1;
    }
    return A;
}
