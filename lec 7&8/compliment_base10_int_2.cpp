#include<iostream>
using namespace std;
int main(){
  int n=10;
  int nnot=(~n);
  int mask=0;
  int m=n;
  while(n!=0){
   mask=((mask<<1)|1);
   n=n>>1;
  }
  int ans=(mask^m);
  cout<<ans;

     
return 0;
}