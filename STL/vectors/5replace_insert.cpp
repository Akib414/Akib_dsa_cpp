#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int>v = {1,2,3,4};
     vector<int>v1 = {11,21,31,41};
     //to insert iterator in needed
     //to insert at second position
     v.insert(v.begin()+2,10);

     //to insert iterator in needed
     //to insert a vector at a position
     v.insert(v.begin()+3,v1.begin(),v1.end());
     for(auto i : v){
        cout<<i<<" ";
     }
cout<<endl;
     vector<int>v2 = {1,2,3,4,2,3,2,11,2,1,2,100,2,7};
     replace(v2.begin(),v2.end(),2,17);//all 2 will get replaced by 17 in the given range
     for(auto i : v2){
        cout<<i<<" ";
     }
cout<<endl;
//find function returns a to an iterator;
// vector<int> :: iterator it;
auto it = find(v.begin()+2,v.begin()+8,3);
cout<<*it<<endl;
auto iter = find(v.begin(),v.end(),120);
cout<<*iter<<endl;//this will return 0 because it is not present , actually it points to v.end();
if(iter == v.end()){
   cout<<"it is not present ";
}
else cout<<"present";
return 0;
}