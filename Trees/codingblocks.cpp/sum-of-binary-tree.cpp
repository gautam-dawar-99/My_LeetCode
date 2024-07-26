#include<bits/stdc++.h>
using namespace std;

class TreeNode {
	public:
		int val;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
public:

	TreeNode* buildTree(istringstream& iss) {
		string val;
		iss >> val;
		if (val == "false") return NULL;
		
		TreeNode* root = new TreeNode(stoi(val));
		string leftExist, rightExist;
		iss >> leftExist;

		if (leftExist == "true") {
			root->left = buildTree(iss);
		}

		iss >> rightExist;
		if (rightExist == "true") {
			root->right = buildTree(iss);
		}

		return root;
	}
    int sumOfTree(TreeNode* root) {

    if (root == NULL) {
        return 0;
    }
    int leftSum = sumOfTree(root->left);
    int rightSum = sumOfTree(root->right);
    int totalSum = root->val + leftSum + rightSum;
    
    return totalSum;
}

	
};
int main(){
	Solution obj;
	string str;
    getline(cin, str);
	// cin>>str;
    istringstream iss(str);
	TreeNode* root=obj.buildTree(iss);

    cout<<obj.sumOfTree(root);

	return 0;
}