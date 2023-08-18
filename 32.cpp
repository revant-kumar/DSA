//CN-Insert Node At The Beginning

Node *insertAtFirst(Node *list, int newValue) {
  Node *temp = new Node(newValue);
  temp->next = list;
  list = temp;
  return list;
}