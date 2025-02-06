#include<iostream>
#include<stack>
using namespace std;

class Stack{
//properties
public:

int *arr;
int top;
int size;

Stack(int size){
    this->size = size;
    arr = new int[size];
    top = -1;
}

void push(int element){
      
      if(size -top>1){
        top++;
        arr[top] = element;
      }
      else{
          cout<<"stack is full"<<endl;
      }

};

void pop(){
    if(top >=0){
        top--;
    }
    else{
        cout<<"Stack is underflow"<<endl;
    }
};

int peek(){
    if(top >=0){
        return arr[top];
    }
    else{
        cout<<"Stack is underflow"<<endl;
        return -1;
    }
};

bool isEmpty(){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
};
};
int main(){
  
Stack st(5);

st.push(10);
st.push(20);
st.push(30);  
cout<<st.peek()<<endl;
st.pop();
cout<<st.peek()<<endl;



/*

stack<int> a;

//push operation
a.push(10);
a.push(20);

a.pop();


cout<<"print top element: "<<a.top()<<endl;

if(a.empty()){
    cout<<"stack is empty"<<endl;
}
else{
    cout<<"stack is not empty"<<endl; //check if stack is empty or not  
}

cout<<"size of stack: "<<a.size()<<endl;  //size of stack
 */
  return 0;
}