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

vector<vector<int>> zigzagLevelOrder(node* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        if (root == nullptr)
            return ans;

        bool lToR = true;

        queue<node*> q;
        q.push(root);
        while (!q.empty()) {
            int sz = q.size();

            vector<int> tmp(sz);
            for (int i = 0; i < sz; i++) {
                node* front = q.front();
                q.pop();

                int idx = lToR ? i : sz-i-1;
                tmp[idx]=front->data;

                if(front->left){
                    q.push(front->left);
                }

                if(front->right){
                    q.push(front->right);
                }
            }
            lToR=!lToR;
            ans.push_back(tmp);
         
        }
        return ans;
    }
int main(){
    node* root = buildTree();
    // print(root);
    // cout<<endl;
    vector<vector<int>> zigzag = zigzagLevelOrder(root);
    int m = zigzag.size();
    int n = zigzag[0].size();
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<zigzag[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
