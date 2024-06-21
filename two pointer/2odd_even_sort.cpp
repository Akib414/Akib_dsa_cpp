#include<iostream>
using namespace std;
int main(){
int arr[8]={4,1,3,6,1,8,5,6};
int s=0;
int e=8-1;
while(s<e){
    if(arr[s]%2==1 && arr[e]%2==0){
        swap(arr[s],arr[e]);
        s++;e--;
    }else if(arr[s]%2==0){
        s++;
    }
    else 
    e--;
}
for(int i=0;i<8;i++){
    cout<<arr[i]<<"    ";
}
}