#include<bits/stdc++.h>
using namespace std;
int main(){
     vector< pair<int,int>> v;
     //IF WE SORT THE VECTOR IT WILL SORT SCCORDING TO THE FIRST VALUE
     //IF TWO OR MORE FIRST VALUE ARE SAME IT WILL SORT ACCORDING TO SECONF VALUE
    v.push_back({6,5});
    v.push_back({2,2});
    v.push_back({1,9});
    v.push_back({4,5});
    v.push_back({6,1});
    sort(v.rbegin(),v.end());//reverse sort;
    for(auto u : v)
    cout<<u.first<<" "<<u.second<<endl;
return 0;
}