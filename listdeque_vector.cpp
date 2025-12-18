#include<iostream>
#include<list>
#include<vector>
#include<deque>
using namespace std;

int main(){
    // list<int> l;

    // l.push_back(1);
    // l.push_back(2);
    // l.push_front(3);
    // l.push_front(5);
    
    // l.pop_back();
    // l.pop_front();

    // for(int val : l){
    //     cout<<val<<" ";
    // }
    // cout<<endl;
    // return 0;

    //deque
    // deque<int>d={1,2,3,4,5};
    
    // for(int val:d){
    //     cout<<val<<" ";
    // }
    //  cout<<endl;
    // cout<<d[2]<<endl;
    // return 0;


    //pair
    vector< pair<int,int> > vec={{1,2},{3,4},{5,6}};

    // for(pair<int,int>p:vec)  or
    for(auto p:vec){
        cout<<p.first<<" "<<p.second<<endl;
    }
}


