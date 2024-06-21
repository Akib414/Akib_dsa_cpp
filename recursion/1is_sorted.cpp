#include<bits/stdc++.h>
using namespace std;
bool is_sorted(int* arr,int n){
    if(n==0 || n==1) return true;
    if(arr[0]>arr[1]) return false;
    else{
        return is_sorted(arr+1,n-1); 
    }
}
int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
     if(is_sorted(arr,n)) cout<<"YES";
     else cout<<"NO";

return 0;
}