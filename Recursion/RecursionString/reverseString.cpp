#include<iostream>
using namespace std;

 int Reverse(string& str,int i,int j)
{
  
  cout<<"Call received for "<<str<<endl;
  //base condition
  if(i>j)
    return 0 ;
  
  swap(str[i],str[j]);
  i++;
  j--;

  Reverse(str,i,j);
}
int main(){
   

string name = "babbar";
cout<<endl;
 Reverse(name,0,name.length()-1);
cout<<name;

  return 0;
}