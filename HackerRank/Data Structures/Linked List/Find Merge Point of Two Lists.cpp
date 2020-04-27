int findMergeNode(SinglyLinkedListNode* A, SinglyLinkedListNode* B) {
    SinglyLinkedListNode *first = A;
    SinglyLinkedListNode *second = B;
    
    while(first != second) {
        first = first ? first->next : B;
        second = second ? second->next : A;
    }
    return first->data;
}
