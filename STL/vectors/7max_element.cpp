#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int>v={3,7,9,17,19,1,1,1,3,5,29,3,4,5};
     //max_element function returns the pointer or the address of the max index;
     // so to store that pointer we need irerator
     //by using * we print it
     vector<int> :: iterator it = max_element(v.begin(),v.end());
     cout<<*it<<endl;
     //we can also use it in range
     it=max_element(v.begin()+1,v.end()-5);
      cout<<*it<<endl;
      //as it returns the pointer of index
      //so to find the index we do this
     it = max_element(v.begin(),v.end());
     cout<<*it<<endl;
     int index =  max_element(v.begin(),v.end())-v.begin();
     cout<<index<<endl;
    

return 0;
}