//reverse letters in a word in a sentence 
#include<bits/stdc++.h>
using namespace std;
int main(){
     string s,word,count;
     getline(cin,s);
     stringstream ss(s);
     stringstream cnt(s);
     int words = 0;
     while(cnt>>count){
        words++;
     }
     int cmpr = 0;
     while(ss>>word){
        cmpr++;
        reverse(word.begin(),word.end());
        if(cmpr==words)
        cout<<word;
        else
        cout<<word<<" ";
     }
return 0;
}