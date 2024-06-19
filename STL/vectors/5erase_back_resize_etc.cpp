#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int>v={3,1,2,6,3,0,1,5,6};
     cout<<v.back()<<endl;

     v.pop_back();
  for(auto u : v){
    cout<<u<<" ";
  }
  cout<<endl;
  cout << *v.begin()<<endl;
  //here it wont print 4th index instend v[0]+4 value;
    cout << *v.begin()+4<<endl;
    //here it will print 3th index value
     cout << *(v.begin()+3)<<endl;

//here because of erase every element of indices are shifting accordingly
//as using erase() shifts all other elemnts so the time complexity is O(n) meanwhile popback() consumes constant O(1);
     v.erase(v.begin());
  for(auto u : v){
    cout<<u<<" ";
  }
  cout<<endl;
  v.erase(v.begin()+1,v.end()-1);
  for(auto u : v){
    cout<<u<<" ";
  }
  cout<<endl;

return 0;
}