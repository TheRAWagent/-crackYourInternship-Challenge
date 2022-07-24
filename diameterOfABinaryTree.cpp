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
    int heightOfSubtree(TreeNode* x)
    {
        if(x==NULL)return -1;
        return 1+max(heightOfSubtree(x->left),heightOfSubtree(x->right));
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)return 0;
        else if(root->left==NULL && root->right==NULL) return 0;
        else if(root->left==NULL || root->right==NULL)return heightOfSubtree(root);
        else if(root->left!=NULL && root->right!=NULL)
        {
            int hl=1+heightOfSubtree(root->left),hr=1+heightOfSubtree(root->right);
            return max(hl+hr,max(diameterOfBinaryTree(root->left),diameterOfBinaryTree(root->right)));
        }
        return 0;
    }
};