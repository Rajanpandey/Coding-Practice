SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode *new_node = new SinglyLinkedListNode(data);
    SinglyLinkedListNode *tail = head;

    if(!position) tail = head = new_node;
    else {
        int count = 0;
        while(count++ != position-1) tail = tail->next;
        new_node->next = tail->next;
        tail->next = new_node;
    }

    return head;
}
