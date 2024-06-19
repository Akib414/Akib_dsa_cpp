#include<iostream>
using namespace std;
int main(){
    int arr[8]={8,7,6,5,4,3,2,1};
    int n=8;
for(int i=1;i<n;i++){
    int current=arr[i];
    int j;
    for(j=i-1;arr[j]>current&& j>=0 ;j--){
        arr[j+1]=arr[j];
    }
    arr[j+1]=current;
}
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
