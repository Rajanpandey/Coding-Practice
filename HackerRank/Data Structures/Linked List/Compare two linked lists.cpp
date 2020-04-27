bool compare_lists(SinglyLinkedListNode* headA, SinglyLinkedListNode* headB) {
    if(!headA && !headB) return 1;
    if(!headA || !headB) return 0;
    
    return (headA->data == headB->data) ? compare_lists(headA->next, headB->next) : 0;
}
