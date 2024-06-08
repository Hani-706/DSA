#include<iostream>
using namespace std;
class Node{
    public:
    char data;
    Node* left;
    Node* right;
};
Node* getnewnode(int data){
    Node* temp=new Node();
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
Node* insert(Node* root,char data){
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
void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    Node* root=NULL;
    root=insert(root,'F');
    root=insert(root,'D');
    root=insert(root,'J');
	root=insert(root,'B');
	root=insert(root, 'E');
	root=insert(root,'G');
	root=insert(root,'K');
	root=insert(root,'A');
	root=insert(root,'C');
	root=insert(root,'I');
	root=insert(root,'H');
	
	print(root);
	cout<<endl;
	preorder(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	postorder(root);
}