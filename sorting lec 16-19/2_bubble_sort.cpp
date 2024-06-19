#include<iostream>
using namespace std;
int main(){
    int arr[7]={3,7,1,4,8,0,4};
    int n=7;
for(int i=0;i<n-1;i++){
    bool swapped =false;
    for(int j=0;j<n-i;j++){
        if(arr[j]>arr[j+1]){ 
            swap(arr[j],arr[j+1]);
        swapped=true;
        }
    }
    if(swapped==false) break;
}
for(int i=0;i<n;i++){
    cout<<arr[i];
}
}