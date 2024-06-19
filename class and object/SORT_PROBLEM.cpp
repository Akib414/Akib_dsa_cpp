/*
You will be given data for N students,
 where each student will have a name (nm), class (cls), section (s), student ID (id),
 math marks (math_marks), and English marks (eng_marks).

Your task is to sort the students data according to the total marks (sum of math_marks and eng_marks) in descending order. 
If multiple student have the same total marks then sort them according to the id in ascending order as the id will be unique.
*/



#include<bits/stdc++.h>
using namespace std;

class student{
   public:
   string name;
   int clas;
   char section;
   int id;
   int m_marks;
   int e_marks;

};

bool cmp(student a,student b){
   int at=a.m_marks+a.e_marks;
   int bt=b.m_marks+b.e_marks;
   if(at==bt)
   return (a.id<b.id);
   else
   return (at>bt);
}

int main(){
int n;
cin>>n;
cin.ignore();
student s[n];
for(int i=0;i<n;i++){
   cin>>s[i].name>>s[i].clas>>s[i].section>>s[i].id>>s[i].m_marks>>s[i].e_marks;
}
sort(s,s+n,cmp);

for(int i=0;i<n;i++){
   cout<<s[i].name<<" "<<s[i].clas<<" "<<s[i].section<<" "<<s[i].id<<" "<<s[i].m_marks<<" "<<s[i].e_marks<<endl;
}
  
return 0;
}