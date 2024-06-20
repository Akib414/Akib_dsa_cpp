#include<iostream>
using namespace std;
int fact(int a){
    if(a==1 || a==0) return 1;
    return a*fact(a-1);
}
int ncr(int n,int r){
    int a=fact(n);
    int b= fact(r)*fact(n-r);
    return a/b;
}
int main(){
    int n,r;
    cout<<"enter:";
    cin>>n>>r;
    cout<<ncr(n,r);

}