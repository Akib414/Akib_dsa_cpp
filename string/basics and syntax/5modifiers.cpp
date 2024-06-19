#include<bits/stdc++.h>
using namespace std;
int main(){
     string a="kire",b="ki obostha";
     a=a+b;//it is modified in behind the scene . it is not working like normal +;
     b.append(a);//same
     cout<<a<<endl<<b<<endl;

     //to insert a charecter at last
     string c="hello";
    //  s[5]="w";it will not append;because its memory is till 4th index
    c.push_back('W');
    cout<<c<<endl;
    c.pop_back();
    cout<<c<<endl;

    //erase a index;
    string e = "bakayaro";
    e.erase(6);//this will remove all 6 to last
    cout<<e<<endl;
    e.erase(3,1);//remove specific
    cout<<e<<endl;

    //replace;
    //like erase + replace
  string f = "konoyaro";
  f.replace(4,3,"yaa");//3 indices next tp index 4 is removed and replaced with yaa
  cout<<f<<endl;
  f.replace(4,1,"aaaaaa");//fourth index is replaced with aaaaaa
  cout<<f<<endl;

  //insert
  string g ="HelloWorld";
  g.insert(5,"        ");//before which index need to be inserted
  cout<<g<<endl;
//back insert
string p = "people";
copy(g.begin(),g.begin()+5,back_inserter(p));
cout<<p<<endl;

//remove
string q = "bdaaaaadfdasfaaasdfa";
q.erase (remove(q.begin(),q.end(),'a'),q.end());
cout<<q<<endl;
//check substring
string t="abcdef";
cout<<t.find("cd")<<endl;//returns the index;
cout<<t.find("kakla")<<endl;









return 0;
}