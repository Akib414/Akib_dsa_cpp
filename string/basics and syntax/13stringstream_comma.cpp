#include<bits/stdc++.h>
using namespace std;
int main(){
     string s="a ,bbbdf ,dfdsf, sd";
     for(int i=0;i<s.size();i++){
      if(s[i]!=',') cout<<s[i];
      else{
         cout<<endl;
      }
     }
     cout<<endl<<"with stringstream"<<endl;
     string a="sfdkh,sdsdfdsf,dsfds";
     stringstream ss(a);
     string word;
     while(getline(ss,word,',')){
      cout<<word<<endl;
     }
return 0;
}