DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
    DoublyLinkedListNode* temp = head;
    DoublyLinkedListNode* newHead = head;

    while(temp) {
        DoublyLinkedListNode* prev = temp->prev;
        temp->prev = temp->next;
        temp->next = prev;
        newHead = temp;
        temp = temp->prev;
    }

    return newHead;
}