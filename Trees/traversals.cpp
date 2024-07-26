#include<bits/stdc++.h>
using namespace std;
class node{
    public:
        int data;
        node* left;
        node* right;

        // constructor to initialize the node
        node(int x){
            data = x;
            left = nullptr;
            right = nullptr;
        }
};
node* buildTree(){
    int data;
    cin>>data;
    // data ==- 1  base case

    if(data == -1){
        return nullptr;
    }
    // root node hme bana pdega

    node* root = new node(data);

    // left subtree recursion bana dega
    root->left = buildTree();

    // right subtree recursion bana dega
    root->right = buildTree();

    // return the root of the tree
    return root;
}
void print(node* root) {
    if(root==NULL){
        // if(!root) return;
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
void preorder(node *root){
    if(!root) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node *root){
    if(!root) return;
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
}
void postorder(node *root){
    if(!root) return;
    preorder(root->left);
    preorder(root->right);
    cout<<root->data<<" ";
}
int main(){
    node* root = buildTree();
    // print(root);
    preorder(root);
    cout<<endl;

    inorder(root);
    cout<<endl;
    
    postorder(root);
    cout<<endl;

    return 0;
}
