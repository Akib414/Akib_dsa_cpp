//find the two non-repeating elements in an array of repeating elements
#include<bits/stdc++.h>
using namespace std;
int main(){
     int arr[10]={1,1,3,3,2,4,3,4,2,5};
     int ans=arr[0];
     for(int i=1;i<10;i++){
         ans=ans^arr[i];
     }
     int temp = ans;
     int ans1=ans;
     int a=0;
     while(temp%2!=1){
        temp=temp>>1;
        a++;
     }
     for(int i=0;i<10;i++){
        if((arr[i]>>a)%2==0) ans=ans^arr[i];
        else ans1=ans1^arr[i];
     }
        cout<<ans<<" "<<ans1;
return 0;
}