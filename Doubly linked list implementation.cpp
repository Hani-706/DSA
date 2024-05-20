#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*prev;
    Node*next;
};
Node*head;
Node* getnewnode(int data){
    Node*newnode=new Node();
    newnode->data=data;
    newnode->prev=NULL;
    newnode->next=NULL;
    return newnode;
}
void insertathead(int data){
    Node*newnode=getnewnode(data);
    if(head==NULL){
        head=newnode;
        return;
    }
    head->prev=newnode;
    newnode->next=head;
    head=newnode;
}
void print(){
    Node*temp=head;
    cout<<"Forward list is"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}
void reverse(){
    Node*temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    cout<<"Reverse list is"<<endl;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->prev;
    }
    cout<<endl;
}
int main(){
    Node*head=NULL;
    insertathead(2);print();reverse();
    insertathead(3);print();reverse();
    insertathead(4);print();reverse();
    insertathead(5);print();reverse();
}