#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
     Node(int val) : data(val), next(nullptr) {} 
};
Node* insert(Node* head,int data){
    Node* temp=new Node(data);
    temp->data=data;
    temp->next=NULL;
    if(head==NULL){
        head=temp;
    }
    else{
        Node*temp1=head;
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;

    }
    return head;
}
void print(Node*head){
    while(head!=NULL){
        cout<<head->data<<"\t";
        head=head->next;
    }
    cout<<endl;
}
Node* reverse(Node* head){
    Node*current,*prev,*next;
    current=head;
    prev=NULL;
    while(current!=NULL){
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    return prev;
}
int main(){
    Node* head=NULL;
    head=insert(head,2);
    head=insert(head,4);
    head=insert(head,6);
    print(head);
    head= reverse(head);
    print(head);
}