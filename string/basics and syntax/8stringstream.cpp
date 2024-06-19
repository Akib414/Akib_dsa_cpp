#include<bits/stdc++.h>
using namespace std;
int main(){
     //to access words stringstream is used
     string s="i am a i dont know";
     stringstream ss(s);
     string word;
     ss>>word;
     cout<<word<<endl;
      ss>>word;
     cout<<word<<endl;
      ss>>word;
     cout<<word<<endl;
      ss>>word;
     cout<<word<<endl;
      ss>>word;
     cout<<word<<endl;
      ss>>word;
     cout<<word<<endl;
//with while loop
cout<<"with while loop"<<endl<<endl;
          string ssss="i am a i dont know";
     stringstream sss(ssss);
     int cnt=0;
     string words;
     while(sss >> words){
        cnt++;
     cout<<words<<endl;
     }
     cout<<cnt<<endl;

return 0;
}