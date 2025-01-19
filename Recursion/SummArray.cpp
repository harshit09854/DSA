#include<iostream>
using namespace std;

int SumArray(int *arr,int size){
  if(size==0){
    return 0 ;
  }
  if(size ==1){
    return arr[0];
  }
  

  return arr[0]+SumArray(arr+1,size-1);
}

int main(){
   
   int arr[5] = {1,2,3,4,5};
   int size = 5;
  
   int ans = SumArray(arr,size);
   cout<<ans;
  return 0;
}