#include<bits/stdc++.h>
using namespace std;
int binser(int *arr,int m,int n,int key){
    int s=m,e=n;
    while(s<=e){
        int m=s+(e-s)/2;
        if(arr[m]==key) return m;
        else if(arr[m]>key) e=m-1;
        else s=m+1;
    }
    return -1;
}
int bin(int *arr,int n){
int s=0,e=n-1,m;
while(s<e){
  m=s+(e-s)/2;
if(arr[m]>=arr[0] && arr[m]<arr[m+1]) {
    s=m+1;
}
else e=m;
}
return s;
}
int main(){
       int arr[10]={7,8,9,10,11,12,1,3,4,5}; 
     int ans=bin(arr,10);
     cout<<ans<<endl;
     int key=11;
     if(key>=arr[0] && key<=arr[ans]){
        cout<<binser(arr,0,ans,key);
     }
     else{
        cout<<binser(arr,ans,10-1,key);
     }


return 0;
}  