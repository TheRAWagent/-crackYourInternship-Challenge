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
    int height(TreeNode* root)
    {
        if(root==nullptr)return 0;
        if(root->left==nullptr && root->right==nullptr)return 1;
        else if(root->left==nullptr)return 1+height(root->right);
        else if(root->right==nullptr)return 1+height(root->left);
        else return 1+max(height(root->left),height(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(root==nullptr)return true;
        else if(abs(height(root->left)-height(root->right))<=1)return isBalanced(root->left) && isBalanced(root->right);
        return false;
    }
};