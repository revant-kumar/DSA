//CN-Introduction To Linked List

Node* constructLL(vector<int>& arr) {
    Node *head = new Node(arr[0]);
    Node *tail = head;
    
    int i;
    for(i=1;i<arr.size();i++){
        Node *temp = new Node(arr[i]);
        tail->next = temp;
        tail = temp;
    }

    return head;
}