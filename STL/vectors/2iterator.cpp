//iterator is a pointer . for vector every index has address .
//if we declare anyvector.begin() it points to the zeroth index of that vector
//then by adding +1 to vector.begin we can access the next index's address
//to access the last  index of  a vector  vector.end is used
#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int>v={1,2,34,45};
     //the way to declare a iterator is
     vector<int>::iterator first_it;
     //first give it the address of v.begin then use it++ till the v.end
     for(first_it=v.begin();first_it!=v.end();first_it++){
        //to access the value in an address we use *
        cout<<*first_it<<" ";
     }
return 0;
}