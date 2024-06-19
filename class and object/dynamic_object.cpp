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
int main(){
    // student akib(1,5.00);
    student* akib = new student(1,5.00);
    cout<<akib->roll<<" "<<akib->cgpa<< endl;
return 0;
}