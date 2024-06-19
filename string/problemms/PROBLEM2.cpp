//count words in astring where special charecters doesnot count as a string

#include<bits/stdc++.h>
using namespace std;
int main(){
     string s;
     getline(cin,s);
     int cnt = 0;
     bool same_word = true ;
     for(char c : s){
        if(isalpha(c)){
            if(same_word == true){
                cnt++;
                same_word = false;
            }
        }
        else
        same_word = true ;

     }
     cout<<cnt;

return 0;
}