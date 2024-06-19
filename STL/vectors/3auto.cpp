#include<bits/stdc++.h>
using namespace std;
int main(){
     //auto in for each loop
        vector<int>numbers={1,2,34,45};
             for(auto u : numbers ){
            cout << u << " ";
            //here type of vector is auto detected
        }

return 0;
}