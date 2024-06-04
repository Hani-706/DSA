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
void findminiterative(Node*root){
    if(root==NULL){
        cout<<"Empty tree";
    }
    while(root->left!=NULL){
        root=root->left;
    }
    cout<<root->data;
}
void findmaxiterative(Node*root){
    if(root==NULL){
        cout<<"Empty tree";
    }
    while(root->right!=NULL){
        root=root->right;
    }
    cout<<root->data;
}
void findminrecursive(Node*root){
    if(root==NULL){
        cout<<"Empty tree";
    }
   else if(root->left==NULL){
       cout<<root->data;
   }
   else{
       findminrecursive(root->left);
   }
   
}

void findmaxrecursive(Node*root){
    if(root==NULL){
        cout<<"Empty tree";
    }
   else if(root->right==NULL){
       cout<<root->data;
   }
   else{
       findmaxrecursive(root->right);
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
	cout<<endl;
    findminiterative(root);
    cout<<endl;
    findmaxiterative(root);
    cout<<endl;
    findminrecursive(root);
    cout<<endl;
    findmaxrecursive(root);
}