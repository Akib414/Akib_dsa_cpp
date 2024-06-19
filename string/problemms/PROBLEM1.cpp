//count words in astring where special charecters doesnot count as a string

#include<bits/stdc++.h>
using namespace std;
int main(){
     string s;
     getline(cin,s);
     stringstream ss(s);
     string word;
     int cnt=0;
     while(ss>>word){
        for(int i=0;i<word.size();i++)
        if((word[i]>='a' && word[i]<='z') || (word[i]>='A' && word[i]<='Z')){
        cnt++;
         break;
        }
     }
     cout<<cnt;

return 0;
}