#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
};
Node*front=NULL;
Node*rear=NULL;
void enqueue(int x){
    Node* temp=new Node;
    temp->data=x;
    temp->next=NULL;
    if(front==NULL&&rear==NULL){
        front=rear=temp;
        return;
    }
    rear->next=temp;
    rear=temp;
}
void dequeue(){
    Node*temp=front;
    if(front==NULL){
        return;
    }
    else if(front==rear){
        front=rear=NULL;
    }
    else{
        front=front->next;
    }
    free(temp);
}
void print(){
    Node*temp=front;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    enqueue(2);  print();
    enqueue(3);  print();
    enqueue(4);  print();
    dequeue(); print();
    enqueue(2);  print();
}