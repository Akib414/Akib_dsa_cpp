#include<bits/stdc++.h>
using namespace std;
int main(){
          pair<int,int>p,q,r,s;
     p=make_pair(2,3);
     q={4,5};
     r={1,3};
     //firstly it will check the first value
     //if they are equal they will check the next value
   if(p>q) cout<<"yes"<<endl;
   else cout <<"no"<<endl;
   
   //min() works the same , firstly compare the first value;
    s=min(q,r);
    cout<<s.first<<" "<<s.second<<endl;
return 0;
}