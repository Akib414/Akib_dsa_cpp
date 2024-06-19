#include<iostream>
using namespace std;
int integer(int n){
    int s=0;
    int e=n;
    int m=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        int sqr=m*m;
        if(sqr==n) return m;
        else if(sqr>n) e=m-1;
        else{
            ans=m;
            s=m+1;
        }
        m=s+(e-s)/2;
    }
  return ans;  
}
float decimal(int n,int precision,int intvalue){
    float factor=1;
    float ans=intvalue;
    for(int i=1;i<=precision;i++){
        factor=factor/10;
        for(float j=ans;j*j<n;j=j+factor){
            ans =j;
        }
    }
return ans;
}
int main(){
    int n;
    cout<<"enter:";
    cin>>n;
    cout<<integer(n)<<endl;
    int intvalue=integer(n);
cout<<"answer is "<<decimal(n,6,intvalue);
}