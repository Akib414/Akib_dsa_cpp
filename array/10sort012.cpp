#include<iostream>
using namespace std;
void printarray(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
int main(){
int arr[6]={1,0,2,1,2,1};
int s=0,m=0,e=6-1;
while(m<=e){
    if(arr[m]==0){
        swap(arr[s],arr[m]);
        m++;s++;
    }else if(arr[m]==2){
        swap(arr[m],arr[e]);
        e--;
    }
    else m++;
}
printarray(arr,6);
}