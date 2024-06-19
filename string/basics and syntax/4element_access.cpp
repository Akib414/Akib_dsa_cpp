#include<bits/stdc++.h>
using namespace std;
int main(){
     string s;
     cin>>s;
     cout<<s[0]<<endl;
     cout<<s.at(0)<<endl;//same as s[0];
     cout<<s.front()<<endl;//same
     cout<<s[s.size()-1]<<endl;
     cout<<s.back()<<endl;//same as line 8;
return 0;
}