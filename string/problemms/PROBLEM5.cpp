//1 STRING AND 1 SUBSTRING IS GIVEN . REPLACE ALL THE SUBSTRING IN THE MAIN STRING WITH #

#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--){
      string s,x;
      cin>>s>>x;
      int cnt=0;
    while(1){
      int pos=s.find(x);
      if(pos>=0)
    s.replace(pos,x.size(),"#");
   else break;

    }
     cout<<s;
     }
return 0;
}