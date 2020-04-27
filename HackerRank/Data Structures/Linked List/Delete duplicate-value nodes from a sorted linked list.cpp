SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {    
    if(!head || !head->next) return head;

    SinglyLinkedListNode* temp = head;
    while(temp->next) {
        if(temp->data != temp->next->data) temp = temp->next;
        else temp->next = temp->next->next;
    }

    return head;
}
