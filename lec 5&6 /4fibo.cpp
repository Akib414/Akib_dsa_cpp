#include<iostream>
using namespace std;
//ways of for loop
int main(){
    int sum,a,b;
    a=0;
    b=1;
    cout<<a <<" " <<b<<" ";
for(int i=1;i<=10;i++){
   sum=a+b;
   cout<<sum<<" ";
   a=b;
   b=sum;

}
}

