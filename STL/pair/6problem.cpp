//https://codeforces.com/contest/166/problem/A

//DONE WITH CLASS

#include<bits/stdc++.h>
using namespace std;
class pos{
    public:
    int first;
    int second;
};
bool cmp(pos a,pos b){
    if(a.first==b.first)
    return a.second<b.second;
    else 
    return a.first>b.first;
}

int main(){
     int n,k;
     cin>>n>>k;
      int arr[n];
       vector<pos>v(n);
     for(int i=0;i<n;i++){
         cin>>v[i].first>>v[i].second;
         arr[i]=0;
     }
     sort(v.begin(),v.end(),cmp);

     int count = 1;
     int a=1;
     if(n==1) cout<<1;
     else{
     for(int i=1;i<n;i++){
      if(v[i].first==v[i-1].first &&  v[i].second==v[i-1].second) count++;
       if(v[i].first!=v[i-1].first || v[i].second!=v[i-1].second ){
            arr[a]=count;
            if(arr[a]>=k && arr[a-1]<k){
               cout<<arr[a]-arr[a-1];
               break;
            }
            count++;
            a++;
         }
         if(i==n-1){
            arr[a]=count;
                        if(arr[a]>=k && arr[a-1]<k){
               cout<<arr[a]-arr[a-1];
               break;
            }
         }
         
     }
     }
return 0;
}
