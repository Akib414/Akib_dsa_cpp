//UNIQUE AND SORTED

#include<bits/stdc++.h>
using namespace std;
int main(){
     set<int>s={3,2,3,1,2,3};
     for(auto u : s) cout<<u<<endl;
     s.clear();
     cout<<endl<<s.empty()<<endl;//returns bool 0 or 1
     s.insert(2);
     s.insert(1);
     s.insert(2);
     s.insert(4);
     s.insert(5);
      cout<<s.count(2)<<endl;//even though 2 occurs 2 times it will show 1 
      cout<<s.count(3)<<endl;//show 0;

    //cant get the pointer address by adding 1 ,2 ,3 with s.begin() like vector
    //it is a complex data structure
    // cout<<(*s.end()-1)<<endl   //ERROR;
    cout<<*(--s.end())<<endl;
    cout<<*(s.rbegin())<<endl;//SAME PURPOSE

s.erase(2);
cout<<"after erasing"<<endl;
for(auto a : s) cout<<a<<"  ";
cout<<endl;

return 0;
}