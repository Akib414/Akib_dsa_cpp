#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int>v = {2,3,5,5,7,7,1,2};
     //for unique vector should be sorted
     sort(v.begin(),v.end());
     //now unique
    // unique(v.begin(),v.end());
    for(auto u : v)
    cout <<u << " ";
    cout<<endl;
    //here it gives warning 
    //because unique returns the index of the next to last unique element 
    //so to find how many unique elements there are we use this as it points to last to the unique elements
    int size = unique(v.begin(),v.end()) - v.begin();
    cout<<size<<endl;
    for(int i=0;i<size;i++)
     cout<<v[i]<<" ";
    cout<<endl;
   for(auto u : v)
    cout <<u << " ";
    cout<<endl;

return 0;
}