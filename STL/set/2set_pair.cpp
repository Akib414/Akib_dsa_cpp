#include<bits/stdc++.h>
using namespace std;
int main(){
     set<pair<int,int> >s;
     s={{2,3},{10,12},{7,6},{6,7},{2,3},{1,1}};
     for(auto a : s) cout<<a.first<<" "<<a.second<<endl;
     set<pair<string,int>,greater<pair<string,int> > > st;//sort in reverse order
     st={{"abc",2},{"bcd",3},{"ghi",1},{"ghi",2}};
     for(auto a : st) cout<<a.first<<" "<<a.second<<endl;

return 0;
}