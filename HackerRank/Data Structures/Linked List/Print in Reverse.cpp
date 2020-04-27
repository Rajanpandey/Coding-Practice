void reversePrint(SinglyLinkedListNode* head) {
    if(head) {        
        reversePrint(head->next);
        cout << head->data << endl;
    }    
}
