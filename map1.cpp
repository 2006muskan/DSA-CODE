#include<iostream>
using namespace std;
#include<stack>
#include<queue>
#include<vector>
#include<map>
#include<unordered_map>
#include<set>
int main(){
    // map<string,int>m;
    //  m["tv"]=100;
    //  m["laptop"]=100;
    //  m["headphone"]=50;
    //  m["tablets"]=125;
    //  m["watch"]=50;

    //   m.insert({"camera",200});
    //  m.emplace("camera",200);
    //  m.erase("camera");
    //  for(auto p:m){
    //     cout<<p.first<<" "<<p.second<<endl;
    //  }
    //  if(m.find("camera") !=m.end())
    //  {cout<<"found\n";
    // }
    // else{
    //     cout<<"not found\n";
    // }
    //  cout<<"count="<<m.count("laptop")<<endl;
    //  cout<<"count="<<m["laptop"]<<endl;
    //  return 0;


    //multimap
    // multimap<string, int>m;
     
    // m.emplace("tv",100);
    // m.emplace("tv",100);
    // m.emplace("tv",100);
    // m.emplace("tv",100);

    // m.erase(m.find("tv"));
    // for(auto p:m){
    //    cout<<p.first<<" "<<p.second<<endl;
    // }

    //onordered map
    //   unordered_map<string, int>m;
    // m.emplace("tv",100);
    // m.emplace("laptop",100);
    // m.emplace("fridge",100);
    // m.emplace("phone",100);

   
    // for(auto p:m){
    //    cout<<p.first<<" "<<p.second<<endl;
    // }

    //set
  set< int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);

    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
   
    // cout<<s.size()<<endl;
    cout<< "lower bound="<< *(s.lower_bound(4))<<endl;//4
    for(auto val:s){
       cout<<val<<" ";
    }
}