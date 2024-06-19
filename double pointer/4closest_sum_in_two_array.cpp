#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,2,3,5,7,9,10,11};
    int brr[5]={4,5,6,7,8};
    int target=19;
    int s=0,e=5-1;
    int mini=INT_MAX;
    int i,j;
    while(s<8 && e>=0){
       int current=arr[s]+brr[e];
       if(abs(target-current)<mini){
        
         mini=abs(target-current);
          i=s;
          j=e;
       }
       if(current>target) e--;
       else s++;
    }
  cout<<i<<j;
}