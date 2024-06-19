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
student fun(){
     student a(20,5.00);
     return a;
}
int main(){
  student ans=fun();//this here is just a copy;not actual one
    cout<<ans.roll<<" "<<ans.cgpa<< endl;
return 0;
}