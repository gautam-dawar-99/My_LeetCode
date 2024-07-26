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
    // root node hme bana pdega

    }
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

int minDepth(node* root) {
    if(!root){
        return 0;
    }
    if(!root->left){
        return minDepth(root->right)+1;
    }
    if(!root->right){
        return minDepth(root->left)+1;
    }

    int ls=minDepth(root->left);
    int rs=minDepth(root->right);

    return min(ls,rs)+1;
}
int main(){
    node* root = buildTree();
    print(root);
    cout<<endl;
    int Minimum_height = minDepth(root);
    cout<<"Number of nodes: "<<Minimum_height<<endl;
    return 0;
}
