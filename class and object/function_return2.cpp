#include<bits/stdc++.h>
using namespace std;

     class student
     {
        public:
        
        int roll;
        double cgpa;
        student(int roll,double cgpa){
            this->roll=roll;
            this->cgpa=cgpa;
        }
     };
student* fun(){
     student a(20,5.00);
     student *p = &a;
     return p;
}
int main(){
  student *ans=fun();//this here is  actual one
  //here p is returned which is address 
  //but after returning the address is cleared
  //so it shows garbage value
  //thats why dynamic object is needed
    cout<<ans->roll<<" "<<ans->cgpa<< endl;
return 0;
}