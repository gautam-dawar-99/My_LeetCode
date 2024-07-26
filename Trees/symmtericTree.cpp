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
 bool symmetric(node* root1,node* root2){
        if(!root1 && !root2){
            return true;
        }
        if(!root1 || !root2){
            return false;
        }
        bool ans1 = symmetric(root1->left,root2->right);
        bool ans2 = symmetric(root1->right,root2->left);

        // both condn will work here we can use any
        // bool ans2 = symmetric(root2->left,root1->right);

        if(ans1 && ans2 && root1->data == root2->data){
            return true;
        }
        return false;
    }
    bool isSymmetric(node* root) {
        if(!root) return true;
        return symmetric(root->left,root->right);
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
    cout<<endl;
    cout<<isSymmetric(root)<<endl;
    return 0;
}
