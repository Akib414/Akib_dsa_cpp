#include<iostream>
using namespace std;
int main(){
    int arr[7]={3,7,1,4,8,0,4};
    int n=7;
    for(int i=0;i<n-1;i++){
        int minidx=i;
        for(int j=i+1;j<n;j++){
      if(arr[j]<arr[minidx]) minidx=j;      
    }
    swap(arr[i],arr[minidx]);
}
for(int i=0;i<n;i++){
    cout<<arr[i];
}
}