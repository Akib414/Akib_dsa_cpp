// A student has several pieces of information, such as a unique ID, name, section, and total marks.
//  You will be given the information of three students. 
//  Your task is to determine and print the details of the student who achieved the highest total marks.
//  In the case of a tie (i.e., two or more students having the same total marks),
//  print the information of the student with the smaller ID.

#include<bits/stdc++.h>
using namespace std;
class info{
    public:
    int id;
    char name[100];
    char section;
    int marks;
};
int main(){
     int t;
     cin>>t;
     while(t--){
        int max=-1;
        int n;
        info abc[3];
        for(int i=0;i<3;i++){
           cin>>abc[i].id;
           cin>>abc[i].name;
           cin>>abc[i].section;
           cin>>abc[i].marks;
           if(abc[i].marks>max){
             max=abc[i].marks;
             n=i;
           }
        }
       cout<<abc[n].id<<" "<<abc[n].name<<" "<<abc[n].section<<" "<<abc[n].marks<<endl;

     }

return 0;
}