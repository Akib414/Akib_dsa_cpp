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
void inserthead(node* &head,int n){
    node* temp = new node(n);
    temp->next = head;
    head = temp;
}
void inserttail(node* &tail,int n){
    node* temp = new node(n);
    tail->next = temp;
    tail = temp;
}
void insert_at_middle(node* tail,node* head,int n,int position){
    //if the position is 1 head needs to be changed;
    if(n==1){
        inserthead(head,n);
        return;
    }
    //if the position is last
    node* temp = head;
    int cnt=1;
    while(cnt<position-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        inserttail(tail,n);
        return;
    }
    node* to_be_inserted = new node(n);
    to_be_inserted->next = temp->next;
    temp->next = to_be_inserted;
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
     node* head = node1;//needed for print
     inserttail(tail,200);
     inserttail(tail,300);
     inserttail(tail,20000);
     inserttail(tail,101);
     inserttail(tail,909);
     inserttail(tail,20);
     inserttail(tail,220);
     print(head);
     //insert
     insert_at_middle(tail,head,987654,4);//head is needed for accesing the nest of n-1 th item
     cout<<"after inserting in middle"<<endl;
     print(head);
     insert_at_middle(tail,head,11111,1);
     cout<<"after inserting in first position"<<endl;
     print(head);
       insert_at_middle(tail,head,123212,11); 
     cout<<"after inserting in last"<<endl;
     print(head);

return 0;
}