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
bool check(node* root, int target){
    if(!root) return false;

    if(root->left == nullptr && root->right == nullptr){
        if(target - root->data ==0){
            return true;
        }
        return false;
    }
    bool lst = check(root->left,target-root->data);

    bool rst = check(root->right,target-root->data);

    return lst || rst;
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
bool hasPathSum(node* root, int targetSum) {
    return check(root,targetSum);
}

int main(){
    node* root = buildTree();
    print(root);
    cout<<endl;
    int targetSum;
    cin>>targetSum;
    bool ans = hasPathSum(root, targetSum);
    cout<<ans<<endl;
 
    return 0;
}
