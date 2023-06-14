#include <iostream>
using namespace std;
int front=-1,e=-1;
int arr[5];
int arr_size=5;
void enqueue(int num){
if(e>=arr_size){
    cout<<"queue is full";
}
else{
    front=0;
    e++;
    arr[e]=num;
}

}

void Dequeue(){
    if(front>e){
     cout<<"queue is empty ";
    }
    else if(front==e){
        e=-1;
        front=-1;
    }
    else{
    front++;
    }
}

void Display(){
    if(e==-1 && front==-1){
        cout<<"empty queue";
    }
    else{
    for(int i=front;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    }
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    Display();
    Dequeue();
    Display();
   
}