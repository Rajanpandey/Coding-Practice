DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode *new_node = new DoublyLinkedListNode(data);
    
    if(!head) head = new_node; 

    if(head->data >= new_node->data) {
        new_node->next = head;
        head->prev = new_node;
        head = new_node; 
    }
    
    else {
        DoublyLinkedListNode *temp = head;
        while (temp->next && temp->next->data < data) temp = temp->next;
        if(temp->next) {
            new_node->next = temp->next;
            temp->next->prev = new_node;
        }     
        temp->next = new_node;
        new_node->prev = temp;
    }      

    return head;
}
