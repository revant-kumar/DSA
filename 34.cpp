//CN-Length of Linked List

int length(Node *head)
{   
    int count = 1;
	Node *l = new Node();
    for(l=head;l->next!=NULL;l=l->next){
        count++;
    }

    return count;
}