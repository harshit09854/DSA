#include<iostream>
using namespace std;

void print(int arr[],int s,int e){
  for (int i = s; i <=e; i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  
}

bool binarySearch(int *arr , int s,int e,int k){

print(arr,s,e);
  // base condition
  //element not find

  if (s>e)
  {
    return false;  
  }
  //element found
  int mid = s+(e-s)/2;

  if(arr[mid]==k){
    return true;
  }

  if (arr[mid]<k)
  {
    return binarySearch(arr,mid+1,e,k);
  }
  else{
    return binarySearch(arr,s,mid-1,k);
  }
  
}


int main(){
int arr[5]={1,2,3,4,5};
int size = 5;
int key = 4;
 
cout<<"Present or not"<<binarySearch(arr,0,4,key)<<endl;

  return 0;
}