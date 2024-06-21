#include<bits/stdc++.h>
using namespace std;
void reverse(string &st,int s){
if(s==st.size()-1) return;
swap(st[s],st[st.size()-s-1]);
return reverse(st,s+1);
}
int main(){
     string st;
     cin>>st;
     reverse(st,0);
     cout<<st;
     

return 0;
}