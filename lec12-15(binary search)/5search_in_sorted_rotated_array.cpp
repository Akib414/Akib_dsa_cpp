#include<iostream>
using namespace std;
int searchpivot(int arr[],int size){
int s=0;
int e=size-1;
int mid=s+(e-s)/2;
while(s<e){
    if(arr[mid]>=arr[0]) s=mid+1;
    else e=mid;
    mid=s+(e-s)/2;
}
return s;
}
int binarysearch(int arr[],int start ,int end ,int key){
int mid=start+(end-start)/2;
while(start<=end){
    if(arr[mid]==key) return mid;
    else if(key>arr[mid]) start=mid+1;
    else end=mid-1;
    mid=start+(end-start)/2;
}
return -1;
}
int main(){
int arr[8]={8,9,10,1,2,3,4,5};
int key=4;
int size=8;
int pivot=searchpivot(arr,8);
cout<<"the pivot is at index "<<searchpivot(arr,8)<<endl;
if(key>=arr[pivot] && key<=arr[size-1])
cout<<"this key is at index "<<binarysearch(arr,pivot,size-1,key);
else
cout<<"this key is at index "<<binarysearch(arr,0,pivot-1,key);
}