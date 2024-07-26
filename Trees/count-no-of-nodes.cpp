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
int count_no_of_nodes(node* root) {
    if(root==nullptr){
        return 0;
    }
    int lst=count_no_of_nodes(root->left);
    int rst=count_no_of_nodes(root->right);
    return lst+rst+1;
}
int main(){
    node* root = buildTree();
    print(root);
    cout<<endl;
    int no_of_nodes = count_no_of_nodes(root);
    cout<<"Number of nodes: "<<no_of_nodes<<endl;
    return 0;
}
