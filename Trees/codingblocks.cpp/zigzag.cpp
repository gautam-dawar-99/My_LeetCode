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

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        if (root == nullptr)
            return ans;

        bool lToR = true;

        queue<TreeNode*> q;
        q.push(root);
        while (!q.empty()) {
            int sz = q.size();

            vector<int> tmp(sz);
            for (int i = 0; i < sz; i++) {
                TreeNode* front = q.front();
                q.pop();

                int idx = lToR ? i : sz-i-1;
                tmp[idx]=front->val;

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

	void print2DVector( vector<vector<int>> vec) {
		for (auto row : vec) {
			for (auto element : row) {
				cout << element << " ";
			}
		}
	}

};
int main(){
	Solution obj;
	string str;
    getline(cin, str);
	// cin>>str;
    istringstream iss(str);
	TreeNode* root=obj.buildTree(iss);

	vector<vector<int>> ans=obj.zigzagLevelOrder(root);
	obj.print2DVector(ans);
	return 0;
}