#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
Node* head;
void insert(int data,int n){
    Node*temp1=new Node();
    temp1->data=data;
    temp1->next=NULL;
    if(n==1){
        temp1->next=head;
        head=temp1;
        return;
    }
    Node*temp2=head; 
    for(int i=0;i<n-2;i++){
        temp2=temp2->next;
    }
    temp1->next=temp2->next;
    temp2->next=temp1;
}
void deleteNode(int n){
Node*temp1=head;
if(n==1){
    head=temp1->next;
    free(temp1);
    return;
}
for(int i=0;i<n-2;i++){
    temp1=temp1->next;
}
Node*temp2=temp1->next;
temp1->next=temp2->next;
free(temp2);
}
void print(){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    head=NULL;
   cout<<"How many numbers\n";
   int n;
   cin>>n;
   cout<<"enter numbers and positions\n";
   for(int i=0;i<n;i++){
       int data,x;
       cin>>data>>x;
       insert(data,x);
   }
    print();
    cout<<"which position number should be deleted?\n";
    int k;
    cin>>k;
    deleteNode(k);
    print();
}
 