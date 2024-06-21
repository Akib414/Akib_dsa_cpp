#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int n;
    node* prev;
    node* next;
    node(int n){
        this->n = n;
        this->prev = NULL;
        this->next = NULL;
    }
};



void insert_at_head(node* &head,node* & tail,int n){
    if(head == NULL){
        node* temp = new node(n);
        head = temp;
        tail = temp ;
    }
node* temp = new node(n);
temp->next = head;
head->prev = temp;
head = temp;
}


void insert_at_tail(node* head,node* &tail,int n){
    if(tail==NULL){
        node* temp = new node(n);
        head = temp;
        tail = temp ; 
    }
node* temp = new node(n);
tail->next = temp;
temp->prev = tail;
tail = temp ;
}


void insert_at_position(node* &head,node* &tail,int position,int n){
if(position == 1){
    insert_at_head(head,tail,n);
    return;
}
node* temp = head;
for(int i=1;i<position-1;i++) temp = temp->next ;
if(temp->next == NULL) {
    insert_at_tail(head,tail,n);
    return;
}
node* to_insert = new node(n);
to_insert->next = temp->next;
temp->next->prev = to_insert;
temp->next = to_insert;
to_insert->prev = temp ;
}
 


void deletion_by_pos(node* &head,node* &tail, int position){
if(position == 1){
    node* temp = head;
head->next->prev = NULL;
head = head->next;
delete temp;
}
else{
    node* temp = head;
    for(int i=1;i<position-1;i++) temp = temp->next;
    node* to_be_deleted = temp->next;
    temp->next = to_be_deleted->next;
    if(to_be_deleted->next == NULL) {
        tail = temp;
        delete to_be_deleted;
        return;
    }
    to_be_deleted->next->prev = temp;
    delete to_be_deleted;
}
}



void print(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->n<<"   ";
        temp = temp->next;
    }
    cout<<endl;
} 



int length(node* &head){
       node* temp = head;
       int l = 0;
    while(temp != NULL){
       
        temp = temp->next;
    } 
    return l;
}



int main(){
     node* node1 = new node(11);
     node* head = node1;
     node* tail = node1;
     insert_at_head(head,tail,10);
     print(head);
     insert_at_tail(head,tail,17);
     print(head);
     insert_at_position(head,tail,3,12);
     print(head);
     insert_at_position(head,tail,5,18);
     print(head);
     insert_at_position(head,tail,1,9);
     print(head);
     deletion_by_pos(head,tail,1);
     print(head);
     deletion_by_pos(head,tail,3);
     print(head);
     deletion_by_pos(head,tail,4);
     print(head);

return 0;
}