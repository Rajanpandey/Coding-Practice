int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    SinglyLinkedListNode* temp = head;
    SinglyLinkedListNode* result = head;
    
    int count = 0;
    while(temp) {
        temp = temp->next;
        if(count++ > positionFromTail) result = result->next;
    }

    return result->data;
}
