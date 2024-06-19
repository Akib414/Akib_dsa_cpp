#include<bits/stdc++.h>
using namespace std;

class info{
    public:
    string name;
    int age;
    float weight;
    info(string nm,int ag, float wgt){
        name = nm;
        age=ag ;
        weight=wgt; 
    }
    void hello(){
        cout<<"printing hello inside class"<<endl;
    }
    void easy_access(){
        cout<<name<<" "<<age<<" "<<weight<<endl;
    }
};

int main(){
     info akib("akib mesbah",20,75.5),chingchang("ching uddin chang",122,2.2);
     akib.hello();
     chingchang.hello();
     akib.easy_access();
     chingchang.easy_access();


return 0;
}