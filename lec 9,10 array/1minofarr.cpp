#include<iostream>
using namespace std;
int maxofarr(int arr[],int n ){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max) max=arr[i];
    }
    return max;
    
}
int main(){
    int arr[9];
    for(int i=0;i<9;i++){
        cin>>arr[i];
    }
    cout<<maxofarr(arr,9);
}
