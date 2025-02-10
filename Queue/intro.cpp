#include<iostream>
using namespace std;

int main() {
    queue<int> q;

    q.push(10);
    cout<<"front element: "<<q.front()<<endl;
    q.push(20);
    cout<<"front element: "<<q.front()<<endl;
    q.push(30);
    cout<<"front element: "<<q.front()<<endl;

    count<<"size of queue: "<<q.size()<<endl;
    q.pop();  
    count<<"size of queue: "<<q.size()<<endl;

    if(q.empty()) {
        count<<"Queue is empty"<<endl;
    } else {
        count<<"Queue is not empty"<<endl;
    }
    return 0;
}











class CircularQueue{
  int *arr;
  int front;
  int rear;
  int size;
  
  public:
  // Initialize your data structure.
  CircularQueue(int n){
      size = n;
      arr = new int[size];
      front = rear = -1;
  }

  // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
  bool enqueue(int value){
      //to check whther queue is full
      if( (front == 0 && rear == size-1) || (rear == (front-1)%(size-1) ) ) {
          //cout << "Queue is Full";
          return false;
      }
      else if(front == -1) //first element to push
      {
    front = rear = 0;
          
      }
      else if(rear == size-1 && front != 0) {
          rear = 0; //to maintain cyclic nature
      }
      else
      {//normal flow
          rear++;
      }
      //push inside the queue
      arr[rear] = value;
      
      return true;
  }

  // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
  int dequeue(){
      if(front == -1){//to check queue is empty
          //cout << "Queue is Empty " << endl;
          return -1;
      }
      int ans = arr[front];
      arr[front] = -1;
      if(front == rear) { //single element is present
          front = rear = -1;
      }
      else if(front == size - 1) {
          front = 0; //to maintain cyclic nature
      }
      else
      {//normal flow
          front++;
      }
      return ans;
  }
};







#include <bits/stdc++.h> 
class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size = 1000001;
       arr = new int[size];
       front = -1;
       rear =-1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value){
        // Write your code here.
        if((front==0 && rear ==size-1)||(rear ==(front-1)%(size-1))){
            cout<<"queue is full";
            return false;
        }
        else if(front==-1){
            front = rear=0;
           
        }
        else if(rear == size-1 && front!=0){
            rear = 0;
        }
        else{
            rear++;  
        }
         arr[rear] = value;
         return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.
    int dequeue(){
        // Write your code here.
        if(front==-1){
          cout<<"queue is empty";
          return -1;
        }
        int ans = arr[front];
        arr[front]=-1;
         if(front==rear){
            front=rear=-1;
        }
        else if(front==size-1){
            front=0;
        }
        else{
            front++;
        }
         return ans;
    }
}