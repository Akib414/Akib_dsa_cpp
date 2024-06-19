#include<bits/stdc++.h>
using namespace std;
int main(){
     string s;
     cin>>s;
     int frq[26]={0};
     for(char c:s){
        cout<<c<<endl;
        frq[c-'a']++;
     }
   for(char a='a';a<='z';a++){
    cout<< a << " -> "<<frq[a-'a']<<endl;
   }
 cout<<endl<<endl<<"AFTER SORTING : ";
   //NOW TO SORT THE STRING (ALTHOUGH FOR INTEGERS SAME PATTERN)
   for(char i='a';i<'z';i++){
    for(int j=0;j<frq[i-'a'];j++)
    cout<<i;
   }
return 0;
}