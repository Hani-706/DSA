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
int findheight(Node* root){
    if(root==NULL){
        return -1;
    }
    return max(findheight(root->left),findheight(root->right))+1;
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
    cout<<findheight(root);
}