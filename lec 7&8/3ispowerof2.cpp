#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter:";
    cin>>n;
    for(int i=0;i<=30;i++){
        int ans=pow(2,i);
      if(n==ans) cout<<"true";
    }
}
