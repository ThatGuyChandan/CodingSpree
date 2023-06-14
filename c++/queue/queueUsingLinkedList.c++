#include <iostream>
using namespace std;
struct Node{
    int val;
    Node* next;
};
Node*front;
Node*e;

void enqueue(int num){
Node*p=new Node();
p->val=num;
p->next=NULL;
if(front==NULL && e==NULL){
    front=p;
    e=p;
    return;
}
e->next=p;
e=p;
}

void Dequeue(){
    if(front==NULL){
        cout<<"empty queue"<<"\n";
    }
    else if(front==e){
        e=NULL;
        front=NULL;
    }
    else{
   front=front->next;
}
}

void Display(){
    if(e==NULL && front==NULL){
        cout<<"empty queue"<<"\n";

    }
    else{
Node*q=front;
while(q!=NULL){
    cout<<q->val<<" ";
    q=q->next;
}
cout<<"\n";
}
}

int main(){
enqueue(1);
enqueue(2);
Display();
Dequeue();
Display();
}