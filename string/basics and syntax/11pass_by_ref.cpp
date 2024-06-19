//as string is a built in class not like other datatypes 
//so it cant be passed by reference like others with pointers
//normally we pass address in the main function 
//then a pointer recieves it in another function
//but for string this method is followed
#include<bits/stdc++.h>
using namespace std;

void change(string & s){//this is the syntax;
    s = "GELLO";
}

int main(){
     string s="hello";
     change(s);
     cout<<s<<endl;

return 0;
}