#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int num;
    node* next;
    node(int num){
        this->num=num;
        this->next=NULL;
    }
};
void insertnode(node* &head , int n){
    node* temp = new node(n);
    temp->next = head;
    head = temp;
}
void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->num<<" ";
        temp = temp->next;
    }
    cout<<endl;

}
int main(){
  node* node1 = new node(10);   
  node* head = node1;
  print(head);
  insertnode(head,15);
  insertnode(head,20);
  insertnode(head,11);
  print(head);


 
return 0;
}