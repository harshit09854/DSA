#include<iostream>
using namespace std;

int ClimbStair(int n){
  if( n<0){
    return 0;
  }
  if(n==0)
  {
    return 1;
  }

  return ClimbStair(n-1)+ClimbStair(n-2);
}

int main(){
   int n;
   cin>>n;
   
   int ans = ClimbStair(n);
   cout<<ans;

  return 0;
}