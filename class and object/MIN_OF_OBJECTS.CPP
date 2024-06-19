#include<bits/stdc++.h>
using namespace std;
class info{
    public:
    string name;
    int roll;
    float marks;
};
int main(){
    int n;
    cin>>n;
     info students[n];
     for(int i=0;i<n;i++){
         cin.ignore();
          getline(cin,students[i].name);
        cin >>students[i].roll >>students[i].marks ; 
       
     }
         for(int i=0;i<n;i++){
        cout <<students[i].roll <<" "<<students[i].marks<<" "<<students[i].name<<endl ;
     }

     info maximum;
     maximum.marks=INT_MIN;
     for(int i=0;i<n;i++){
        if(maximum.marks<students[i].marks){
            maximum=students[i];
        }
     }
     
cout<<maximum.marks<<" "<<maximum.roll<<" "<<maximum.name<<endl;
return 0;
}