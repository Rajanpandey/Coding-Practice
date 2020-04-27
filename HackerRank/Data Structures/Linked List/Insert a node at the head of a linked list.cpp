SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode *new_node = new SinglyLinkedListNode(data);
    
    if(!llist) llist = new_node;
    else {
        new_node->next = llist;
        llist = new_node;
    }

    return llist;
}
