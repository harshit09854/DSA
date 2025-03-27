#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
  map<string, int> m;
      

    //insertion
    //1
    pair<string,int> p = make_pair("babbar",3);
    m.insert(p);

    //2
    pair<string,int> pair2("love",2);
    m.insert(pair2);

    m["mera"] = 1;
    m["mera"] = 2;


    //Search
    cout<<m["babbar"]<<endl;

    cout<< m["unknownKey"]<<endl;
    cout<< m.at("unknownKey")<<endl;

    //size
    cout<<m.size();
   
    cout<<m.count("love")<<endl;

    //erase
    m.erase("love");
    cout<<m.size()<<endl;

  for(auto i:m){
    cout<<i.first<<" "<<i.second<<endl;

  }

  //iterator
  map<string, int>::iterator it;
  for(it=m.begin(); it!=m.end(); it++){
    cout<<it->first<<" "<<it->second<<endl;
  }

  return 0;
}