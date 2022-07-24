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
    bool traversal(TreeNode* root,int n,bool s)
    {
        if(root==nullptr)return true;
        else if(s && root->val>n)return traversal(root->left,n,s) && traversal(root->right,n,s);
        else if(!s && root->val<n)return traversal(root->left,n,s) && traversal(root->right,n,s);
        else return false;
    }
    bool isValidBST(TreeNode* root) {
        if(root->left==nullptr && root->right==nullptr)return true;
        else if(root->left==nullptr)
        {
            if(traversal(root->right,root->val,true)) return isValidBST(root->right);
            else return false;
        }
        else if(root->right==nullptr)
        {
            if(traversal(root->left,root->val,false))return isValidBST(root->left);
            else return false;
        }
        else if(traversal(root->left,root->val,false) && traversal(root->right,root->val,true))return isValidBST(root->left) && isValidBST(root->right);
        else return false;
    }
};