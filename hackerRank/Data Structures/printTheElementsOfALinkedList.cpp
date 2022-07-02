// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
    while(true){
        cout << head->data << endl;
        if(head->next == NULL){
            return;
        }
        
        head = head->next;
    }
}
