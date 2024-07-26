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

node* buildTreeLevelOrder(){

    int data;
    cout<<"Enter root data : ";
    cin>> data;
    if(data==-1)
    return nullptr;

    node* tmp = new node(data);

    queue<node*> q;
    q.push(tmp);

    // while(!q.empty()){
    //     node* temp = q.front();
    //     q.pop();
    //     cin>>data;
    //     if(data!=-1){
    //         temp->left = new node(data);
    //         q.push(temp->left);
    //     }
    //     cin>>data;
    //     if(data!=-1){
    //         temp->right = new node(data);
    //         q.push(temp->right);
    //     }
    // }

    while(!q.empty()){
        node* f = q.front();
        q.pop();

        int ldata;
        cout<<"Enter left data : ";
        cin>>ldata;
        if(ldata!=-1){
            node* lnode=new node(ldata);
            f->left=lnode;
            q.push(lnode);
        }

        int rdata;
        cout<<"Enter right data : ";
        cin>>rdata;
        if(rdata!=-1){
            node* rnode=new node(rdata);
            f->right=rnode;
            q.push(rnode);
        }

    }
    return tmp;
}
void levelOrder(node* root){
    if(root==nullptr)
    return;
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout<<temp->data<<" ";

        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
    }

}
int main(){
    node* root = buildTreeLevelOrder();
    cout<<"Level Order traversal of the constructed tree is :\n";
    levelOrder(root);
    return 0;
}
