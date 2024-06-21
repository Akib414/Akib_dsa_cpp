//not unique like set but sorted
#include<bits/stdc++.h>
using namespace std;
int main(){
     multiset<int>s;
     s.insert(3);
     s.insert(2);
     s.insert(1);
     s.insert(5);
     s.insert(2);
     s.insert(2);
     s.insert(1);
     s.insert(1);
     s.insert(8);
     s.insert(9);
     for(auto a : s) cout<<a<<"     ";
     cout<<endl;
     cout<<s.count(1)<<endl;
     s.erase(1);//this will erase all 1s;
     for(auto a : s) cout<<a<<"     ";
     cout<<endl;
     //but to erase just one value we need to use poiter
     auto it = s.find(2);
     s.erase(it);
    auto iter = s.find(10);
    cout<<*iter<<endl;//if the element is not present;
    if(iter==s.end()) cout<<"it is not present"<<endl;
     for(auto a : s) cout<<a<<"     ";
return 0;
}