#include<iostream>
using namespace std;

bool findTarget(int *arr,int target,int size){
     
     if(size==0){
      return false;
     }
     if(arr[0]==target){
      return true;
     }
     else{
bool remainingPart = findTarget(arr+1,target,size-1);
     return remainingPart ;
}
}

int main(){
   int arr[5]={1,2,3,4,5};
   int target = 6;
   int size = 5;  
    
  bool find = findTarget(arr,target,size);
if(find){
    cout<<"Element is find";
   }
   else{
    cout<<"element not find";
   }
  return 0;
}