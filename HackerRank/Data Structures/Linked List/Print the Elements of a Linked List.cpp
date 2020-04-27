void printLinkedList(SinglyLinkedListNode* head) {
    while(head) {
        cout << head->data << endl;
        head = head->next;
    }
}