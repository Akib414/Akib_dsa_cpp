#include<bits/stdc++.h>
using namespace std;
int sum_of_array(int *arr,int n){
if(n==0) return 0;
return arr[0] + sum_of_array(arr+1,n-1);

}
int main(){
     int n;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
cout<<sum_of_array(arr,n)<<endl;
return 0;
}