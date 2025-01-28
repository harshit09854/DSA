#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *next;

  // constructor
  Node(int data)
  {
    this->data = data;
    this->next = NULL;
  }
  ~Node()
  {
    int value = this->data;
    // memory free
    if (this->next != NULL)
    {
      delete next;
      this->next = NULL;
    }
    cout << "Deleted Node with data " << value << endl;
  }
};

void insertAtHead(Node *&head, int d)
{
  Node *temp = new Node(d);
  temp->next = head;
  head = temp;
}

void insertAtTail(Node *&tail, int d)
{
  // new node create
  Node *temp = new Node(d);
  // linking
  tail->next = temp;
  // update tail
  tail = temp;
}

void print(Node *&head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << "->";
    temp = temp->next;
  }
  cout << endl;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
  // insert at first
  if (position == 1)
  {
    insertAtHead(head, d);
    return;
  }

  Node *temp = head;
  int cnt = 1;
  while (cnt < position - 1)
  {
    temp = temp->next;
    cnt++;
  }
  // insert at last
  if (temp->next == NULL)
  {
    insertAtTail(tail, d);
    return;
  }
  // creating a node for d
  Node *nodeToInsert = new Node(d);
  nodeToInsert->next = temp->next;
  temp->next = nodeToInsert;
}


void deleteNode(int position, Node* & head)
{
  // deleting first or start node
  if (position == 1)
  {
    Node *temp = head;
    head = head->next;
    // memory free
    temp->next = NULL;
    delete temp;
  }
  else
  {
    Node* curr = head;
    Node* prev = NULL;

    int cnt = 1;
    while (cnt < position)
    {
      prev = curr;
      curr = curr->next;
      cnt++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
  }
}


bool isCircularList(Node* head) {
    //empty list
    if(head == NULL) {
        return false;
    }

    Node* temp = head -> next;
    while(temp != NULL && temp != head ) {
        temp = temp -> next;
    }

    if(temp == head ) {
        return true;
    }

    return false;

}
int main()
{

  // created a new node
  Node *node1 = new Node(10);
  // cout << node1->data << endl;
  // cout << node1->next << endl;

  // head pointed to node1
  Node *head = node1;
  Node *tail = node1;
  print(head);

  insertAtTail(tail, 20);
  print(head);

  insertAtTail(tail, 15);
  print(head);

  insertAtPosition(tail, head, 4, 22);
  print(head);

  cout << "head: " << head->data << endl;
  cout << "tail:" << tail->data << endl;

  deleteNode(1, head);
  print(head);

   cout << "head: " << head->data << endl;
  cout << "tail:" << tail->data << endl;



  return 0;
}