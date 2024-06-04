#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
};
Node* getnewnode(int data){
    Node* temp=new Node();
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
Node* insert(Node* root,int data){
    if(root==NULL){
        root=getnewnode(data);
    }
    else if(data<=root->data){
        root->left=insert(root->left,data);
    }
    else{
         root->right=insert(root->right,data);
    }
    return root;
}
void print(Node* root){
    if(root==NULL){
        return;
    }
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}
bool search(Node* root,int data){
    if(root==NULL){
        return false;
    }
    else if(root->data==data){
        return true;
    }
    else if(data<=root->data){
        return search(root->left,data);
    }
    else{
        return search(root->right,data);
    }
}
int main(){
    Node* root=NULL;
    root=insert(root,15);
    root=insert(root,10);
    root=insert(root,20);
	root=insert(root,25);
	root=insert(root, 8);
	root=insert(root,12);
	print(root);
    if(search(root,24)){
        cout<<"found";
    }
    else {
        cout<<"Not found";
    }
}