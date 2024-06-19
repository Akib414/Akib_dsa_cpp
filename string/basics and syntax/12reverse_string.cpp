#include<bits/stdc++.h>
using namespace std; 

void reversely_print(stringstream & stream){
     string reciever;
     if(stream>>reciever){
          reversely_print(stream);
          cout<<reciever<<endl;
     }
     //no base case is neeeded . it automatically stops when if condition ends that means nothing left in stream

}

int main(){
     string s;
     getline(cin,s);
     string reciever;
     stringstream stream(s);
     // while(stream>>reciever){
     //      cout<<reciever<<endl;
     // }
     reversely_print(stream);


return 0;
}