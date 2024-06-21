#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[8]={-4,-3,-1,0,1,5,6,7};//must be in non decreasing order
int s=0;
int e=8-1;
vector<int>v;
while(s<e){
if(abs(arr[s])>abs(arr[e])){
    v.push_back(arr[s]*arr[s]);
    s++;

}
else{
       v.push_back(arr[e]*arr[e]); 
       e--;
}
}
reverse(v.begin(),v.end());
for(auto& i:v){
    cout<<i<<" ";
}

return 0;
}