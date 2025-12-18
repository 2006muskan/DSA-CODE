#include <iostream>
using namespace std;


void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "";
    }
    cout << endl;
}
void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smallestIdx=i;//unsorted part starting index
       for(int j=i+1;j<n;j++){
        if(arr[j]<arr[smallestIdx]){
            smallestIdx=j;
        }
     }
     swap(arr[i],arr[smallestIdx]);
    }  

}

int main()
{
    int n = 5;
    int arr[] = {4, 3, 2, 1, 5};
    selectionsort(arr, n);
    printarr(arr, n);

    return 0;
}