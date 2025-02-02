/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node* sortList(Node *head){
    // Write your code here.
    int ZeroCount = 0;
    int oneCount =0;
    int TwoCount = 0;

    Node* temp= head;
    while(temp!=NULL){
        if(temp->data ==0)
            ZeroCount++;
        
        else if(temp->data==1)
            oneCount++;
        
        else if(temp->data ==2)
            TwoCount++;

        temp = temp->next;
    }
    
    temp = head;
    while(temp!=NULL){
        if(ZeroCount!=0){
            temp->data = 0;
            ZeroCount--;
        }
        else if(oneCount!=0){
            temp->data =1;
            oneCount--;
        }
        else if(TwoCount!=0){
            temp->data=2;
            TwoCount--;
        }
        temp = temp->next;
    }
        return head;


}