#include<iostream>
using namespace std;
int firstocc(int arr[],int size,int key){
int start=0;
int end=size-1;
int mid=start+(end-start)/2;
int ans;
while(start<=end){
if(arr[mid]==key){
ans=mid;
end=mid-1;
}
else if(arr[mid]<key) start=mid+1;
else end=mid-1;
mid=start+(end-start)/2;
}
return ans;
}

int lastocc(int arr[],int size,int key){
int start=0;
int end=size-1;
int mid=start+(end-start)/2;
int ans;
while(start<=end){
if(arr[mid]==key){
ans=mid;
start=mid+1;
}
else if(arr[mid]<key) start=mid+1;
else end=mid-1;
mid=start+(end-start)/2;
}
return ans;
}


int main(){
int arr[9]={1,2,3,9,9,9,9,10,12};
int f=firstocc(arr,9,9);
int l=lastocc(arr,9,9);
cout<<"the first index of  is "<<f<<endl;
cout<<"the last index of  is "<<l<<endl;
//TOTAL NUMBER OF OCCURENCE=(FIRST+LAST)/2  +  1;
cout<<"the number of occurences of 4 is "<<l-f+1;
}

