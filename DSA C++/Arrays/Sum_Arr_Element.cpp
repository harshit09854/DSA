#include<iostream>
using namespace std;

int main(){
      
      int n=5;
    int arr[5] = {1,2,3,4,5};
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum = sum+arr[i];
    }
    cout<<sum;
    return 0;
    
}