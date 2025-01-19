#include<iostream>
using namespace std;

int fibonacci(int n){
  if(n==1)
    return 0;
  
  if(n==2)
    return 1;
  

  int ans = fibonacci(n-1)+fibonacci(n-2);
  return ans;
}

int main(){

    
    int n;
    cin>>n;

    int fib = fibonacci(n);
    cout<<fib;
  return 0;
}