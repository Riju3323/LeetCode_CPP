/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorderr(vector<int> &x, TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        inorderr(x,root->left);
        x.push_back(root->val);
        inorderr(x,root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        inorderr(v,root);
        return v;
    }
};