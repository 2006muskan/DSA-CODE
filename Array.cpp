#include<iostream>
using namespace std;
// int main(){
//     // code for smallest no.
//    int nums[]={5,15,22,1,-15,-24};
//    int size = 6;

//    int smallest = INT16_MAX;//sabse badi no.

//    for(int i=0; i<size;i++ ){
//     // if (nums[i]< smallest){
//     //   smallest = nums[i];
//     // }
//     //or we can use min and max function directly in place of above one (if)
//    smallest = min(nums[i],smallest);
//    }
//    cout<<"smallest="<<smallest<<endl;
//    return 0;
// }
//code for largest no.
// int main(){
//     int nums[]={34,65,61};
//     int size=3;

//     int largest = INT16_MAX;

//     for(int i=0;i<size;i++){
//     largest=max(nums[i],largest);
//     }
//     cout<<"largest="<<largest<<endl;
//     return 0;
// }
//LINEAR SEARCH
// int linearSearch(int arr[],int size,int target){
// for(int i=0;i<size;i++){
//     if(target==arr[i])
//     return i;
// }
// return -1;//not found the value;
// }

// int main(){
// int arr[]={1,2,5,4,3};
// int size=5;
// int target =4;
// cout<<linearSearch(arr , size,target)<<endl;
// return 0;
// }
//reverse array 
void reverseArray(int arr[], int size){
int start=0,end=size-1;
while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
}
}
int main(){
    int arr[]={4,2,7,8,1,2,5};
    int size =7;

    reverseArray(arr,size);

    for(int i=0;i<=size;i++){
    cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;   

}
