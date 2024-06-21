#include<bits/stdc++.h>
using namespace std;
bool binary_search(int* arr,int s,int e,int target){
     int m = s+(e-s)/2;
     if(s>e) return false;
     if(arr[m]==target) return true;
     if(arr[m]>target) return binary_search(arr,s,m-1,target);
     else return binary_search(arr,m+1,e,target);
  
}
int main(){
     
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     int target ;
     cin>>target;
     sort(arr,arr+n);
     int s=0;
     int e=n-1;
     if(binary_search(arr,s,e,target)) cout<<"found";
     else cout<<"Not found";

return 0;
}