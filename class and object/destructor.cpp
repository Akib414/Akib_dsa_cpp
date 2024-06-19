//destructor dosent take any arguement and dosent have a return type
//objects are destroyed in reverse order 
// destructor is automatically called when the program is terminated
#include<bits/stdc++.h>
using namespace std;
class des{
    public:
    int number;
    des(int num){
        number =  num;
        cout<<"constructor is called"<<endl;
        cout<<"the number is "<<number<<endl;
    }
    ~des(){
        cout<<"destructor is called"<<endl;
        cout<<"number is deleted"<<endl;
    }
};
int main(){
    des seven(7); 
return 0;
} 