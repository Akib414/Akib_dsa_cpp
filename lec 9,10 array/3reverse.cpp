#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
int arr[6]={1,3,4,2,5,6};
int brr[4]={4,3,2,1};
reverse(arr,6);
cout<<endl;
reverse(brr,4);

}
