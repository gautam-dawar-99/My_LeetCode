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
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
}
 node* invertTree(node* root) {
        if(!root)
            return NULL;

        swap(root->left,root->right);

        invertTree(root->left); //Call the left substree
      
        invertTree(root->right); //Call the right substree
        
        return root; 
        
    }
int main(){
    node* root = buildTree();
    print(root);
    cout<<endl;
    root = invertTree(root);
    print(root);
  
    return 0;
}
