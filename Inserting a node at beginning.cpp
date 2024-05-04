#include<iostream>
using namespace std;
class Node{
    public:
    int data;
     Node*next;
};
 Node*head;
void insert(int x){
    Node*temp=new Node();
    temp->data=x;
    temp->next=head;
    head=temp;
}
void print(){
     Node*temp=head;
    cout<<"List is ";
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    head=NULL;
    cout<<"How many numbers?"<<endl;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter number"<<endl;
        int x;
         cin>>x;
         insert(x);
         print();
    }
    
}
