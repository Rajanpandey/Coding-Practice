SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode* temp = head;
    
    if(!position) {
        head = head->next;
        delete temp;        
    } else {
        int count = 0;
        while(count++ != position-1) temp = temp->next;
        SinglyLinkedListNode* temp1 = temp->next;
        temp->next = temp1->next;
        delete temp1;
    }
    
    return head;
}
