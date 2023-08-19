//CN-Search Element in LL

int searchInLinkedList(Node<int> *head, int k) {
    Node<int> *l = new Node<int>();
    for(l=head;l->next!=NULL;l=l->next){
        if(l->data==k){
            return 1;
        }
    }

    if(l->data==k){
            return 1;
    }

    return 0;
}