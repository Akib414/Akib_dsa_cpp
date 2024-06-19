#include<iostream>
#include<vector>

using namespace std;
int main(){
vector<int>ans;
   int arr1[5]={4,2,3,4,5};
   int arr2[4]={4,1,4,3};
   for(int i=0;i<5;i++){
    for(int j=0;j<4;j++)
        if(arr1[i]==arr2[j]) {
        ans.push_back(arr1[i]);
        arr2[j]=INT_MIN;
        break;
    }
}
for(int i=0;i<ans.size();i++)
cout<<ans[i];
}