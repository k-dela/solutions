/*
 * Complete the 'reversePrint' function below.
 *
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
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

void reversePrint(SinglyLinkedListNode* llist) {
    vector<string> result;
    string numStrign = "";
    SinglyLinkedListNode* temp = llist;
    while(temp->next != NULL){
        result.push_back(to_string(temp->data));
        temp = temp->next;
    }
    
    result.push_back(to_string(temp->data));
    //cout << result << endl;
    
    for(int i = result.size()-1; i >= 0; i--){
        cout << result[i] << endl;
    }
}
