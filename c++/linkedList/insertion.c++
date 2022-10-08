#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

int main() {
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

int index;
cout<<"insertion of new node at index:";
cin>>index;
cout<<"\n";

Node*New=new Node();
Node*p=head;
int i=0;
while(i!=index-1){
    p=p->next;
    i++;
}
New->data=5;
New->next=p->next;
p->next=New;

Node*temp=A;
cout<<"linked list after insertion: ";
while(temp!=NULL){
cout<<temp->data;
temp=temp->next;
}

}

