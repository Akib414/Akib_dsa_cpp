//iterators is like pointers
#include<bits/stdc++.h>
using namespace std;
int main(){
     string s="fdkfhsfkhsdfjkhdsf";

     cout<<*s.begin()<<endl;
     cout<<*s.end()<<endl;//it is next to the last index which is null

          string:: iterator iter;
     for(iter=s.begin();iter != s.end();iter++)
     cout<<(*iter);
     cout<<endl;
    for(auto iter = s.begin();iter < s.end();iter++)
    cout<<*iter;




return 0;
}