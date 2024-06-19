#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     vector<int>v(n);
     for(int i=0;i<n;i++) cin>>v[i];
     int count = 0;
     for(auto a : v){
        if(find(v.begin(),v.end(),a+1)<v.end()) count++; 
     }
     cout<<count;

return 0;
}