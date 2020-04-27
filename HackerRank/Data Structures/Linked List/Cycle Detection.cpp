bool has_cycle(SinglyLinkedListNode* head) {  
    if(!head) return 0;
    
    SinglyLinkedListNode* fast = head;
    SinglyLinkedListNode* slow = head;
    
    while(fast && fast->next) {
        fast = fast->next->next;
        slow = slow->next;

        if(fast == slow) return 1;       
    }
    
    return 0;
}
