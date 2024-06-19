#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int>v={12,55,2,3,8,5,11,22,17,7,7,19};
     sort(v.begin(),v.end());
     for(auto number : v)
     cout<<number<<" ";
     cout<<endl;
     //the process for partial sorting;
 vector<int>v1={12,55,2,3,8,5,11,22,17,7,7,19};
     sort(v1.begin(),v1.end()-3);
     for(auto u : v1)
     cout<<u<<" ";
   cout<<endl;

      vector<int>v2={12,55,2,3,8,5,11,22,17,7,7,19};
     sort(v2.begin()+2,v2.begin()+6);
     for(auto u : v2)
     cout<<u<<" ";
   cout<<endl;

      vector<int>v3={12,55,2,3,8,5,11,22,17,7,7,19};
     sort(v3.end()-10,v3.begin()+9);
     for(auto u : v3)
     cout<<u<<" ";
        cout<<endl;

        //now to sort a vector in decreasing order a comperator named greater is used

        vector<int>v4={12,55,2,3,8,5,11,22,17,7,7,19};
     sort(v4.begin(),v4.end(),greater<int>());
     for(auto u : v4)
     cout<< u <<" ";
        cout<<endl;

        //another way to sort in decreasing order or i would say reverse increasing order

                vector<int>v5={12,55,2,3,8,5,11,22,17,7,7,19};
     sort(v5.rbegin()+2,v5.rend()-2);
     for(auto u : v5)
     cout<< u <<" ";
        cout<<endl;
return 0;
}