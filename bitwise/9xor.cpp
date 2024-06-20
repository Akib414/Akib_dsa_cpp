//find the one non-repeating elements in an array of n times(here 3 times) repeating elements
#include<bits/stdc++.h>
using namespace std;
int main(){
     int arr[10]={1,1,3,3,2,1,3,4,2,2};
     int frq[32]={0};
     for(int i=0;i<10;i++){
         int a=0;
         while(arr[i]!=0){
            if(arr[i]%2==1) frq[a]++;
            a++;
            arr[i]=arr[i]>>1;
         }
     };
     int ans=0;
     for(int i=0;i<32;i++){
        if(frq[i]%3==1){
           ans=ans+pow(2,i);
        }
     }
     cout<<ans;
        
return 0;
}