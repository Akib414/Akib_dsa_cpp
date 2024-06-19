#include<bits/stdc++.h>
using namespace std;
int main(){
     string s="429";
     int a = stoi(s);
     cout<<a+8<<endl;

     //another method
     string str="400";
     int b;
     istringstream(str)>>b;
     cout<<b+8;

return 0;
}