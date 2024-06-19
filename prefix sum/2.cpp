#include<iostream>
using namespace std;
int main(){
int arr[5]={6,2,4,3,1};
int sum=0;
for(int i=0;i<5;i++){
  sum+=arr[i];
}
int target = sum/2;
int j,total1=0,total2=0;
for(j=0;j<5;j++){
total1+=arr[j];
if(total1==target){
  cout<<"vvv";
   break; 
} 
}
cout<<j;
}
