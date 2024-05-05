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
    //insert(2,1);//2
    //insert(4,1);//4 2
   // insert(5,2);//4 5 2
   // insert(3,1);//3 4 5 2
   // insert(2,2);//3 2 4 5 2
   // insert(5,4);//3 2 4 5 5 2
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
}
 