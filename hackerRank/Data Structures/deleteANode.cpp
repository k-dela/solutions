/*
 * Complete the 'deleteNode' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    SinglyLinkedListNode* tempNode = llist;
    
    if(position == 0){
        if(tempNode->next != NULL){
            llist = tempNode->next;
            delete tempNode;
            return llist;
        }else{
            delete llist;
            return NULL;
        }
    }
    
    
    int currentP = 0;
    
    while(currentP < position-1){
        tempNode = tempNode->next;
        currentP += 1;
    }
    
    SinglyLinkedListNode* nodeToDelete = tempNode->next;
    
    tempNode->next = nodeToDelete->next;
    delete nodeToDelete;
    
    return llist;
}
