#include<bits/stdc++.h>

using namespace std;
class student{
    public:
    int roll;
    int cls;
    string name;
    student(int r,int c,string name){
        roll = r;
        cls = c;
        this->name=name;
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
  student * rahim = new student(29,7,"rahimul");
 student * karim = new student(100,200,"karimul");
rahim->cls=karim->cls;
rahim->name=karim->name;
cout<<"the details of rahim are:"<<endl;
cout<<rahim->cls<<endl;
cout<<rahim->roll<<endl;
cout<<rahim->name<<endl;

//even if we delete karim now sakib will be intact as it will create copy

info* akib = new info(20,'A');
info *rakib = new info(23,'R');

//the best copy meathod 
*akib = *rakib;
delete rakib;
//even if we delete karim now sakib will be intact as it will create copy

cout<<akib->age<<" "<<akib->letter<<endl;
cout<<rakib->age<<" "<< rakib->letter<<endl;
return 0;
}