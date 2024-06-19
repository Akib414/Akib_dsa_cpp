#include<iostream>
using namespace std;
int main(){
    int ans=0;
int arr[5]={1,2,3,4,2};
for(int i=0;i<5;i++){
    ans=ans^arr[i];
}
for(int j=1;j<5;j++){
    ans=ans^j;
}
cout<<ans;
}
