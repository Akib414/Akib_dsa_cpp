#include<bits/stdc++.h>
using namespace std;
int main(){
     int arr[6+1]={1,3,4,5,6,7};
     int pos = 1;
     int val=2;
     for(int i=6-1;i>=pos;i--){
        arr[i+1]=arr[i];
    
     }
     arr[pos]=val;
     for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
     }

return 0;
}