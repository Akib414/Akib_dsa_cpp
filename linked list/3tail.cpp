#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int n;
    node* next;
    node(int n){
        this->n = n;
        this->next = NULL;
    }
};
void inserttail(node* &tail,int n){
    node* temp = new node(n);
    tail->next = temp;
    tail = temp;
}
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->n<<"  ";
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
     node* node1 = new node(100);
     node* tail = node1;
     node* head = node1;
     inserttail(tail,200);
     inserttail(tail,300);
     inserttail(tail,20000);
     inserttail(tail,101);
     inserttail(tail,909);
     inserttail(tail,20);
     inserttail(tail,220);
     print(head);

return 0;
}