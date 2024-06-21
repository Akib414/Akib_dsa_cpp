#include<iostream>
using namespace std;
int main(){
    int arr[6]={2,4,6,6,12,12};
    int target=24;
int n=6;
int a=0;
    for(int i=0;i<n-3;i++){
        for(int j=i+1;j<n-2;j++){
          int s=j+1;
          int e=n-1;
          while(s<e){
            int current=arr[i]+arr[j]+arr[s]+arr[e];
            if(current==target){
                cout<<"("<<arr[i]<<","<<arr[j]<<","<<arr[s]<<","<<arr[e]<<")"<<endl;
                if(arr[e]!=arr[e-1] && arr[s]!=arr[s+1]){
                  e--; 
                  s++; 
                }
                else if(arr[e]==arr[e-1]) e--;
                else s++;
            }
            else if(current>target) e--;
            else if(current<target) s++;
          }  
        }

    }
    

}