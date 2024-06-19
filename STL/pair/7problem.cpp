
//https://codeforces.com/contest/166/problem/A
//DONE WITH PAIR


#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b){
   if(a.first==b.first) return a.second<b.second;
   else return a.first>b.first;

}
int main(){
     int n,k;
     cin>>n>>k;
      int arr[n];
     vector<pair<int,int > >v(n);
     for(int i=0;i<n;i++){
         cin>>v[i].first>>v[i].second;
         arr[i]=0;
     }
     sort(v.begin(),v.end(),cmp);
     int count = 0;
     for(auto a : v){
      if(a==v[k-1]) count++;
     }
     cout<<count;

return 0;
}
