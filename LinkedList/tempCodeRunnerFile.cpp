void deleteNode(int position, Node *&head)
{
  Node *temp = head;
  int cnt = 1;
  while (cnt < position - 1)
  {
    temp = temp->next;
    cnt++;
  }
  Node *toDelete = temp->next;
  temp->next = temp->next->next;
  delete toDelete;
}