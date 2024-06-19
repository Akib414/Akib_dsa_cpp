#include<bits/stdc++.h>
using namespace std;
int main(){
        vector<int>numbers={1,2,34,45};
    //int this process first we declare an integer . here it is u
    //then by (:) this colon we can access start to end of a vector one by one
    //in this process first numbers[0] comes to int u 
    // then int u = numbers[1] thus till the end      

        for(int u : numbers ){
            cout << u << " ";
        }
        
cout<<endl;
//here it prooves that changing int u dosen't change vector v;
        for(int u : numbers ){
            u=u*2;
        }
   for(int u : numbers ){
            cout << u << " ";
        }
        
cout<<endl;
return 0;
}