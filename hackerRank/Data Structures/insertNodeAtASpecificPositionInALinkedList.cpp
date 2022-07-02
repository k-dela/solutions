SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    
    if(llist == NULL){
        llist = newNode;
        return llist;
    }
    
    int currentP = 0;
    SinglyLinkedListNode* temp = llist;
    while(currentP < position-1){
        temp = temp->next;
        currentP += 1;
    }
    
    SinglyLinkedListNode* tempNode = temp->next;
    temp->next = newNode;
    newNode->next = tempNode;
    
    return llist;
}
