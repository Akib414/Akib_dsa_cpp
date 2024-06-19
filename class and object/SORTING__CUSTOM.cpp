//THIS WORKS WITH TWO PROPERTIES  VALUE AND COUNT 
//IT SPRTS ACCORDING TO THE NUMBER OF COUNT NOT VALUE

#include<bits/stdc++.h>
using namespace std;

class freq{
    public:
    char value;
    int count;
};
bool cmp(freq a,freq b){
    if(a.count == b.count){
        return a.value<b.value;
    }
    else
    return (a.count>b.count);
}

int main(){
     string s;
     cin>>s;
     freq f[26];
     for(int i=0;i<26;i++){
        f[i].count = 0;
        f[i].value = (char)(i+'a');
     }
     for(char c:s){
        int position = (int)(c-'a');
        f[position].count++;

     }

     //TO SORT IN APPHABETICAL ORDER
     cout<<"SORTING IN APLHABETICAL ORDER : ";
     for(int i=0;i<26;i++){
        for(int j=0;j<f[i].count;j++)
        cout<<(char)(i+97);
     }
cout<<endl;

//TO SORT ACCORDING TO NUMBER OF OCCURENCES

sort(f,f+26,cmp);
cout<<"SORTING ACCORDING TO OCCURENCES : ";
for(char i=0;i<26;i++){
    for(int j=0;j<f[i].count;j++){
        cout<<f[i].value;
    }
}
return 0;
}