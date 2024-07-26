#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Function to build the tree from "true"/"false" input
TreeNode* buildTree(string s) {
    if (s == "true") {
        int d;
        cin >> d;
        TreeNode* root = new TreeNode(d);

        string leftChild, rightChild;
        cin >> leftChild;
        root->left = buildTree(leftChild);

        cin >> rightChild;
        root->right = buildTree(rightChild);

        return root;
    }
    return NULL;
}

// Function to print level_order tree in zigzag level order
vector<vector<int>> level_order(TreeNode* root) {
    vector<vector<int>> ans;
    if (root == NULL) return ans;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        vector<int> currentTreeNode;
        while (size-- > 0) {
            TreeNode* TreeNode = q.front();
            q.pop();
            currentTreeNode.push_back(TreeNode->data);

            if (TreeNode->left != NULL) {
                q.push(TreeNode->left);
            }
            if (TreeNode->right != NULL) {
                q.push(TreeNode->right);
            }
        }
        ans.push_back(currentTreeNode);
    }

    return ans;
}

int main() {
    TreeNode* root = buildTree("true");

    vector<vector<int>> ans = level_order(root);
    cout<<"[";
    for(int i =0 ;i<ans.size(); i++){
        cout<<"[";
		for(int j =0; j<ans[i].size();j++){
			cout<<ans[i][j];
			if(j<ans[i].size()-1){
			cout<<", ";
			}


		}
		cout<<"]";
		if(i<ans.size()-1){
			cout<<", ";
		}
	}
    
	cout<<"]";

    return 0;
}