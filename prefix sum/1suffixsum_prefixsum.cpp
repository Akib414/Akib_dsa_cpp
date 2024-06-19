#include<iostream>
using namespace std;
int main(){
int arr[5]={6,2,4,3,1};
int sum=0;
for(int i=0;i<5;i++){
  sum+=arr[i];
}
int prefix_sum=0,suffix_sum;
for(int i=0;i<5;i++){
  prefix_sum+=arr[i];
  suffix_sum=sum-prefix_sum;
  if(suffix_sum==prefix_sum){
    cout<<"yes";
    break;
  }
}
}
