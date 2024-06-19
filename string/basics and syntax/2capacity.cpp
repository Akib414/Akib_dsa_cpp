#include<bits/stdc++.h>
using namespace std;
int main(){
string s="hello guys";
cout<<s.size()<<endl;
cout<<s.max_size()<<endl;
string a="jjjjjjjjjjjjjjj";
cout<<a.capacity()<<endl;//capacity is not maximum size
return 0;
}