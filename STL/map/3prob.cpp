#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="rjs kot w lmy nh fn zo cfg bl m q ms pnt tko iym uo nmx jl vn i sin";
       stringstream ss(s);
        string word;
       map<string,int>cnt;
        int mx=-1;

        while(ss>>word){
            cnt[word]++;
            if(mx<cnt[word]) mx=cnt[word];
            
        }
        for(auto a:cnt){
            if(a.second==mx){
                 cout<<a.first<<" "<<to_string(mx);
                break;
            }
        }
   

return 0;
}