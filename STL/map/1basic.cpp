#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<long long int>v={1111111111111,1111111111111,2222222222111,2222222222111,2222222222111,1,2,22,1};
     map<long long int,int>cnt;//here the first parameter works as index and second parameter for value in that index
    for(auto a : v){
        cnt[a]++;//firstly the value of index is auto initialized with 0
    }
    cout<<cnt[1111111111]<<endl;//complexity log2(n);
    //with freequency array we cant declare a array this size;
 //it works like pair
for(auto u:cnt) cout<<u.first<<"   "<<u.second<<endl;//complexity nlog2(n);
//it is in sorted order according to index
return 0;
}