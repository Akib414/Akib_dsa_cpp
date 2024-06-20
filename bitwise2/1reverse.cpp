#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cout<<"enter:";
    cin>>n;
    int ans=0;
    int ld;
    while(n!=0){
    ld=n%10;
    if(ans>(INT_MAX/10) || ans<INT_MIN/10){
         ans=0;
         break;
    }

    ans=(ans*10)+ld;
    n/=10;
    }
    cout<< ans;
}