#include <iostream>
using namespace std;
struct Node{
int data;
Node*next;
};
int main(){
    Node*A;
    A=NULL;
    Node*head=new Node();
    Node*first=new Node();
    Node*second=new Node();
    Node*third=new Node();
head->data=1;
head->next=first;
A=head;
first->data=2;
first->next=second;
    
second->data=3;
second->next=third;

third->data=4;
third->next=NULL;

Node*q=head->next;
Node*p=head;
int i=0;
int index;
cout<<"enter the index of the node that is to be deleted:";
cin>>index;

while(i<index-1){
    q=q->next;
    p=p->next;
    i++;
}

p->next=q->next;
free(q);

Node*temp=A;
cout<<"linked list after deletion: ";
while(temp!=NULL){
cout<<temp->data;
temp=temp->next;
}
}