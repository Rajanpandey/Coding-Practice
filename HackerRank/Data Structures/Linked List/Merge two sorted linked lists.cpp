SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* A, SinglyLinkedListNode* B) {
    if(!A) return B;
    if(!B) return A;
    
    SinglyLinkedListNode *res;
    
    if(A->data <= B->data) {
        res = A;
        res->next = mergeLists(A->next, B);
    } else {
        res = B;
        res->next = mergeLists(B->next, A);
    }

    return res;
}
