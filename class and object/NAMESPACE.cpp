#include<bits/stdc++.h>

using namespace std;
namespace alu{
int age=24;
void halow(){
    cout<<"hallow from function in namespace"<<endl;
}
class begun{
    public:
    int bones;
    char grp;
};

}
namespace potol{
int age1=2400;
void halow1(){
    cout<<"hallow from function in namespace with previous declaration"<<endl;
}
class begun1{
    public:
    int bones1;
    char grp1;
};

}
using namespace potol;
int main(){
halow1();     
cout<<alu::age<<" "<<endl;//if we dont declare namespace;
alu::halow();
cout<<age1<<" "<<endl;



return 0;
}