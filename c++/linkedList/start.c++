#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* link;
};

int main() 
{
Node*A;
A=NULL;
Node*head=new Node();
Node*first=new Node();
Node*second=new Node();

head->data=2;
head->link=first;
A=head;
first->data=3;
first->link=second;
    
second->data=4;
second->link=NULL;
Node*temp=A;
while(temp!=NULL){
   cout<<temp->data;
temp=temp->link;
}    
    
}