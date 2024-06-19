#include<bits/stdc++.h>
using namespace std;

     class student
     {
        public:
        char name[100];
        int roll;
        double cgpa;
     };

int main(){
    student a;
    a.cgpa = 3.69;
    // a.name = "akib"; cant be done like this
    char temp[100]="akib";
    strcpy(a.name,temp);
    cout<<a.name<<endl;

return 0;
}