#include<iostream>
#include<stdbool.h>
using namespace std;
void search(int arr[],int n,int key){
    int x;
    bool flag=0;
for(int i=0;i<n;i++){
    if(arr[i]==key){
        flag=1;
        x=i;
       
    }
}
if(flag)
     cout<<key<<" is present and index is "<<x;
else cout<<"not present";
}
int main(){
    int arr [7]={1,2,4,6,8,4,3};
    int key;
    cin>>key;
    search(arr,7,key);

}
