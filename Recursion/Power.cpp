#include<iostream>
using namespace std;

int Power(int n){
//base condition
  if(n==0){
    return 1;
  }
   
   return 2*Power(n-1);
}

int main(){

int n ;
cin>>n;

int pow= Power(n);
cout<<pow;
  return 0;
}