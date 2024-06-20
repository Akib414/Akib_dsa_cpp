#include<iostream>
using namespace std;
void reverse(int arr[],int n){
for(int i=0;i<n;i+=2){
    if(i+1<n){
        swap(arr[i],arr[i+1]);
    }
}
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
int arr[6]={1,3,4,2,5,6};
int brr[5]={4,3,2,1,0};
reverse(arr,6);
cout<<endl;
reverse(brr,5);

}

