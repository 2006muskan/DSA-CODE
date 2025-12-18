#include<istream>
using namespace std;
int main(){
    int arr[5]={3,4,1,8,5};
    sort(arr,arr+5);
 
    for(int val: arr){
        cout<<val<<" ";
    }
}