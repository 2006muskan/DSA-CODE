#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int sum =0;
    while(num>0){
        int lastdigit=num%10;  //give last digit
        sum+=lastdigit;   // sum 
        num=num/10; //remove last digit

    }
    if(sum%3==0){
        cout<<"divisible by 3";
    }
    else{
        cout<<"not divisible by 3"; 
    }
return 0;
}