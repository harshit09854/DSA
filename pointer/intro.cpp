#include<iostream>
using namespace std;

int main(){
   
   int num=5;
  //  cout<<num<<endl;

   //addres of Operator - 

  //  cout<<"address of num is"<<&num<<endl;

  //  int *ptr = &num;

  //  cout<<"Address is:"<<ptr<<endl;
  //  cout<<"Value is:"<<*ptr<<endl;
   
   int a = num ;
   cout<<"a before "<<num<<endl;
   a++;
   cout<<"a after "<<num<<endl;

   int *p = &num;
   cout<<"before"<<num<<endl;
   (*p)++;
   cout<<"after"<<num<<endl;

   //copying pointer
   int *q = p;
   cout<<p<<"-"<<q<<endl;
   cout<<*p<<"-"<<*q<<endl;

  return 0;
}
