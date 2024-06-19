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
     student* a = new student(20,5.00); 
     return a;
}
int main(){
  student *ans=fun();//this here is  actual one
  //here p is returned which is address 
  //but after returning the address is cleared
  //so it shows garbage value
  //thats why dynamic object is needed
  //this time the problem mentioned above is solved
    cout<<ans->roll<<" "<<ans->cgpa<< endl;
    delete ans;
    return 0;
}