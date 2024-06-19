#include<bits/stdc++.h>
using namespace std;
int main(){
     //string is a class and constructor type

    //  so it can be initialized like this 
string s("hello buddy");
cout<<s<<endl;
string a("hello myself",4);
cout<<a<<endl;
//different 
string b(s,4);
cout<<b<<endl;
string c(100,'x');
cout<<c<<endl;

return 0;
}