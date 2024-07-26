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

	bool isSameTree(TreeNode* root1,TreeNode* root2){
    if(root1==NULL && root2==NULL)
        return true;
    if(root1==NULL || root2==NULL)
        return false;
    bool lst=isSameTree(root1->left,root2->left);
    bool rst=isSameTree(root1->right,root2->right);
    if(root1->val == root2->val && lst && rst){
        return true;
    }
    return false;
}


};
int main(){
	Solution obj;
	string str1;
    getline(cin, str1);
	// cin>>str;
    istringstream iss(str1);
	TreeNode* root1=obj.buildTree(iss);

	string str2;
    getline(cin, str2);
	// cin>>str;
    istringstream iss2(str2);
	TreeNode* root2=obj.buildTree(iss2);


    // Check if the two trees are identical
    if (obj.isSameTree(root1, root2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

	
	return 0;
}