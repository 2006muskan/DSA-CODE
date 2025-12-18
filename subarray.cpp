#include<iostream>
using namespace std;

/// SUBARRAY CODE
// int main(){
//     int n=5;
//     int arr[5]={1,2,3,4,5};
//     for(int st=0;st<n;st++){//st=start
//        for(int end=st;end<n;end++){
//         for(int i=st;i<=end;i++){
//             cout<<arr[i];
//         }
//         cout<<" ";
//     }
// cout<<endl;
// }
// return 0;
// }

// MAXIMUM SUBARRAY SUM;
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};

    int maxSum = INT16_MIN;
     
    for(int st=0;st<n;st++){
        int currSum =0;
        for(int end=st;end<n ;end++){
            currSum +=arr[end];
            maxSum = max(currSum , maxSum);
        }
    }
    cout<<"max sumarray sum="<<maxSum<<endl;
    return 0;
}
