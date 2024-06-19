#include<bits/stdc++.h>
using namespace std;
int main(){
     //getline is for char array
     string s;
     getline(cin,s);
     cout<<s<<endl;
     cout<<s.size()<<endl;
      // a disgusting problem of getline when integer is 
// int x;
// cin>>x;
// string ss;
// getline(cin,ss);
// cout<<ss<<endl;//this will not print beacuse before taking input of ss integer was taken input
// // to solve this cin.ignore() is used or getchar();
// cin.ignore();
int y;
cin>>y;
cin.ignore();
string yy;
getline(cin,yy);
cout<<yy<<endl;


return 0;
}