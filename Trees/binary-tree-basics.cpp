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
int main(){
    node* root = buildTree();
    print(root);

    return 0;
}

// input : 1 2 -1 -1 3 -1 -1
// output : 1 2 3
