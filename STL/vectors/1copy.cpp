#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int>origin;
     origin={1,2,4,5};
     cout<<origin[2]<<endl;
     vector<int>copy = origin;
     cout<<copy.size()<<endl;
     for(int i=0;i<copy.size();i++){
        cout<<copy[i]<<"  ";
     }
     cout<<endl;
//if we change origin it wont change copy now
origin[2]=1000;
       for(int i=0;i<copy.size();i++){
        cout<<copy[i]<<"  ";
     }
  cout<<endl;
  for(int i=0;i<origin.size();i++){
        cout<<origin[i]<<"  ";
     }
     cout<<endl;

return 0;
}