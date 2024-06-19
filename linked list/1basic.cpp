//singly linked list 
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
int main(){
     node* node1 = new node(10);
     cout<<node1->data<<"        "<<node1->next<<endl;

return 0;
}