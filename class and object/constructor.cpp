#include<bits/stdc++.h>
//constructor is like a function without inside class a return type
//it can accept parameters
using namespace std;
class student{
    public:
    int roll;
    int cls;
    student(int r,int c){
        roll = r;
        cls = c;
    }
};
class info{
    public:
    int age;
    char letter;
    info(int age,char letter){
        this->age=age;
        (*this).letter=letter;
    }
};
int main(){
  student rahim(29,7),karim(1,10);

cout<<rahim.cls<<" "<<rahim.roll<<endl;
cout<<karim.cls<<" "<<karim.roll<<endl;

info akib(20,'A'),rakib(23,'R');
cout<<akib.age<<" "<<akib.letter<<endl;
cout<<rakib.age<<" "<< rakib.letter<<endl;


return 0;
}