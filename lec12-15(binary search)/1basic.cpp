#include<iostream>
using namespace std;
int search(int arr[],int size,int n){
int start=0;
int end=size-1;
int mid=start-(start-end)/2;
while(start<=end){
if(arr[mid]==n) return mid;
else if(arr[mid]<n){
start=mid+1;
mid=start-(start-end)/2;
}
else{
end=mid-1;
mid=start-(start-end)/2;
}
}
return -1;
}
int main(){
int arr[8]={1,2,3,4,6,7,8,9};
int brr[7]={2,4,5,6,7,8,9};
int crr[9]={1,2,3,4,5,6,7,8,9};
cout<<search(crr,9,9);
}