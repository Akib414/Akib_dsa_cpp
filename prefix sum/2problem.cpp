//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int q;
cin>>q;
vector<int>v,u;
vector<pair<int,int> >p(q);
int sum=0;
for(int i=0;i<n;i++){
    int x;
    cin>>x;
    u.push_back(x);
    sum=sum+x;
    v.push_back(sum);
}
for(int i=0;i<q;i++) {
    cin>>p[i].first>>p[i].second;
    cout<<v[p[i].second-1]-v[p[i].first-1]+u[p[i].first-1]<<endl;
}

return 0;
}