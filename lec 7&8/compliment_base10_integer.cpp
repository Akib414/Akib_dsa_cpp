#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter:";
    cin>>n;
    int compliment;
    int mask=0;
    int m=n;
    if(n==0) {
        compliment=1;
        cout<<compliment;
    }
    else{
    while(n!=0){
        mask=(mask << 1 ) | 1;
        n=n >> 1;
    }
    compliment=((~m) & mask);
    cout<<compliment;
    }
}
