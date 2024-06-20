#include<iostream>
using namespace std;
void printarray(int arr[],int n){
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
int main(){
int arr[6]={1,0,1,1,0,1};
int left=0;
int right=6-1;
while(left<right){
    if(arr[left]==0 && left<right) left++;
    else if(arr[right]==1 && left<right) right--;
    else if(arr[left]==1 && arr[right]==0 &&left<right) swap(arr[left],arr[right]);
}
printarray(arr,6);
}