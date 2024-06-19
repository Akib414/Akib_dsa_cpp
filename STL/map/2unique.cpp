#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int>v={3,1,2,1,2,3,4,3,7,8,12,1};
     map<int,int>unq;
     for(auto a : v) unq[a]++;
     map<int,int> :: iterator it;
     for(it=unq.begin();it!=unq.end();it++){
        cout<<(*it).first<<endl;
     }
     //easy way to access map using for each loop
     for(auto a : unq) cout<<a.second<<endl;

return 0;
}