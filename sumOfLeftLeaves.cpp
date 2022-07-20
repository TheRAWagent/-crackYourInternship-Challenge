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
    int solution(TreeNode* root)
    {
        if(root==nullptr)return 0;
        if(root->left==nullptr && root->right==nullptr)return 0;
        if(root->left==nullptr)return solution(root->right);
        if(root->left->left==nullptr && root->left->right==nullptr)return root->left->val+solution(root->right);
        if(root->right==nullptr)return solution(root->left);
        
        return solution(root->left)+solution(root->right);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root->left==nullptr && root->right==nullptr)return 0;
        else return solution(root);
    }
};