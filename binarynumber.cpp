#include<iostream>
using namespace std;

//DECIMAL TO BINARY
// int dectobinary(int decnum){

//     int ans=0;
//     int pow=1;
//     while(decnum>0){
//     int rem= decnum%2;
//     decnum=decnum/2;
//     ans+=(rem*pow);
//     pow=pow*10;
//     }
//     return ans;

//  }int main(){
//     int decnum =8;
//      cout<<dectobinary(decnum)<<endl;
//      return 0;
//  }
//  //not using function
//  {
//     int decnum;
//     cout << "Enter the decnum" << endl;
//     cin >> decnum;
//     int ans = 0, pow = 1;
//     while (decnum > 0)
//     {
//         int rem = decnum % 2;
//         decnum = decnum / 2;
//         ans = ans + (rem * pow);
//         pow = pow * 10;
//     }
//     cout << "binary" << ans;
//     return ans;
// }

//BINARY TO DECIMAL
int binarytodec(int binnum){
    int ans=0,pow=1;
    while(binnum>0){
        int rem=binnum%10;
        ans+=rem*pow;

        binnum/=10;
        pow*=2;
        }
        return ans;
}
int main(){
    cout<< binarytodec(100)<<endl;
    return 0;
}

// //binary number
// #include<iostream>
// using namespace std;
// int main(){
//     int a =4,b=2;
//     cout<<(a&b)<<endl;//bitwise and
//     cout<<(a|b)<<endl;//bitwise or
//     cout<<(a^b)<<endl;//bitwise XOR
//     cout<<(a<<b)<<endl;//left shift--a*2 to power b
//     cout<<(a>>b)<<endl;//rightshift-----a/2 to power  b
//     return 0;

// }