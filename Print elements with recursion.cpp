#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
Node* insert(Node* head,int data){
    Node*temp=new Node();
    temp->data=data;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        Node* temp1=head;
       while(temp1->next!=NULL){
           temp1=temp1->next;
       }
       temp1->next=temp;
    }
    return head;
}
void print(Node* head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<"\t";
   print(head->next);//recursive call of print function
}
int main(){
    Node* head=NULL;
    head=insert(head,2);
    head=insert(head,4);
    head=insert(head,6);
    head=insert(head,5);
    print(head);
}