#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cout<<"enter:";
    cin>>n;
    int ans=1;
    for(int i=0;i<=30;i++){
      if(n==ans) cout<<"true";
      if(ans<INT_MAX/2)
      ans=ans*2;
    }
}