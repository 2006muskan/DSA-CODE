#include<iostream>
using namespace std;
#include<stack>
#include<queue>
#include<vector>
int main(){
    // stack<int> s;

    // s.push(1);
    // s.push(2);
    // s.push(3);

    // while(!s.empty()){
    //     cout<<s.top()<<endl;
    //     s.pop();
    // }
    // cout<<endl;

    // stack<int> s2;
    // s2.swap(s);
    // cout<<"s size:"<<s.size()<<endl;
    // cout<<"s2 size:"<<s2.size()<<endl;
    // return 0;

    //queue
    //  queue<int> q;

    // q.push(1);
    // q.push(2);
    // q.push(3);

    //  while(!q.empty()){
    //     cout<<q.front()<<" ";
    //    q.pop();
    // }
    //  cout<<endl;


    //priority queue
    // priority_queue<int,vector<int>, greater<int>>q;
 priority_queue<int>q;
    q.push(5);
    q.push(3);
    q.push(10);
    q.push(4);

     while(!q.empty()){
        cout<<q.top()<<" ";
       q.pop();
    }
     cout<<endl;

}