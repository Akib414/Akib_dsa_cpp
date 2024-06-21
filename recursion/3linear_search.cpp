#include<bits/stdc++.h>
using namespace std;
bool linear_search(int* arr,int n,int target){
    if(n==0) return false;
    if(arr[0] == target) return true;
    return linear_search(arr+1,n-1,target);
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
     if(linear_search(arr,n,target)) cout<<"found";
     else cout<<"Not found";

return 0;
}