#include<iostream>
using namespace std;

// void changeA(int a) //pass by value
// {
//     a=20;
// }
//     int main(){
//         int a=10;
//         changeA(a);
//         cout<<"inside main func:" <<a<<endl;
//         return 0;
//     }

    void changeA(int *ptr) //pass by reference using pointer
{
    *ptr=20;
}
    int main(){
        int a=10;
        changeA(&a);
        cout<<"inside main func:" <<a<<endl;
        return 0;
    }
