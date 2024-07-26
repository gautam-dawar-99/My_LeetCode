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

bool isSameTree(node* root1,node* root2){
    if(root1==NULL && root2==NULL)
        return true;
    if(root1==NULL || root2==NULL)
        return false;
    bool lst=isSameTree(root1->left,root2->left);
    bool rst=isSameTree(root1->right,root2->right);
    if(root1->data == root2->data && lst && rst){
        return true;
    }
    return false;
}
int main(){
    node* root1 = buildTree();
    node* root2 = buildTree();
    cout<<"Tree 1: ";
    print(root1);
    cout<<endl;
    cout<<"Tree 2: ";
    print(root2);
    cout<<endl;
    cout<<isSameTree(root1,root2);
    
    return 0;
}
