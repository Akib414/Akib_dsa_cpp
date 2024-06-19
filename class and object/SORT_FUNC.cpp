
     #include<bits/stdc++.h>
using namespace std;
class info{
    public:
    string name;
    int roll;
    float marks;
};

//WE WILL NEED A BOOLEAN FUNCTION TO COMAPARE TWO OBJECTS TO SORT
bool cmp(info a,info b){
 /*   if(a.marks>b.marks) return false ;     //FALSE MEANS HERE IT NEEDS TO BE SWAPPED
     else return true ;                     //MEANS NO NEED TO BE SWAPPED */

     //WORKS SAME
             // IN NON DECREASING ORDER
     return (a.marks <= b.marks) ; //WORKS SAME AS PREVIOUS LINES
}


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
        cout <<students[i].roll <<" "<<students[i].marks<<" "<<students[i].name<<endl;
     }
     sort(students,students+n,cmp);
     cout<<"AFTER SORTING"<<endl;
             for(int i=0;i<n;i++){
        cout <<students[i].roll <<" "<<students[i].marks<<" "<<students[i].name<<endl;
     }

return 0;
}
