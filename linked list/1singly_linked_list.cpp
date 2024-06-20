#include<bits/stdc++.h>
using namespace std;
class node{
  public:
  int num;
  node* next;
  node(int num){
    this->num = num;
    this->next = NULL;
  }
  ~node(){
    int value = this->num;
    cout<<value<<"  is deleted"<<endl;
  }
};
void insert_at_head(node* &head,int n){
  node* temp = new node(n);
  temp->next = head;
  head = temp;
}
void insert_at_tail(node* &tail,int n){
  node* temp = new node(n);
  tail->next = temp;
  tail = temp;
}
void insert_at_position(node* &head,node* &tail,int position, int n){
  if(position == 1){
    insert_at_head(head,n);
    return;
  }
  node* temp = head;
  for(int i=1;i<position-1;i++)  temp = temp->next;
   
  
  if(temp->next == NULL){
    insert_at_tail(tail,n);
    return;
  }
  node *middle = new node(n);
    middle->next= temp->next;
  temp->next = middle;

}
void deletion_by_pos(node* &head,node* &tail,int position){
  if(position == 1){
    node* temp = head;
    head = head->next;
    delete temp;
  }

  else{
    node* temp = head;
    for(int i=1;i<position-1;i++)    temp = temp->next;
    node* to_be_deleted = temp->next;
    if(to_be_deleted->next == NULL) tail = temp;
    temp->next = to_be_deleted->next;
    delete to_be_deleted;
  }
}
void deletion_by_num(node* &head , node* &tail , int n){
  if(head->num == n){
    node* temp = head;
    head = head->next;
    delete temp;
  }
  else{
    node* temp = head;
    while(temp->next->num != n){
      temp=temp->next;
    }
    node* to_be_deleted = temp->next;
    if(to_be_deleted->next == NULL) tail = temp;
    temp->next = to_be_deleted->next;
    delete to_be_deleted;
  }
}
void print(node* &head){
  node* temp = head;
  while(temp != NULL){
    cout<<temp->num<<"  ";
    temp = temp->next;
  }
  cout<<endl;
}
int main(){
     node* node1 = new node(10);
     node* head = node1;
     node*tail = node1;
     insert_at_tail(tail,11);
     insert_at_tail(tail,12);
     insert_at_tail(tail,13);
     insert_at_tail(tail,14);
     insert_at_tail(tail,16);
     insert_at_tail(tail,18);
     insert_at_tail(tail,19);
     insert_at_head(head,9);
     insert_at_position(head,tail,7,15);
     insert_at_position(head,tail,9,17);
     print(head);
     deletion_by_pos(head,tail,1);
     print(head);
     deletion_by_pos(head,tail,7);
     print(head);
     deletion_by_pos(head,tail,9);
     print(head);
     deletion_by_num(head,tail,10);
     print(head);


return 0;
}