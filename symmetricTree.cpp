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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)return true;
        else if(p==NULL || q==NULL)return false;
        else if(p->val==q->val)return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
        return false;
    }
    TreeNode* invertTree(TreeNode* x) {
        if(x==NULL)return x;
        else if(x->left==NULL && x->right==NULL)return x;
        else if(x->left==NULL){
            x->left=x->right;
            x->right=NULL;
        }
        else if(x->right==NULL){
            x->right=x->left;
            x->left=NULL;
        }
        else{
            TreeNode* temp=x->left;
            x->left=x->right;
            x->right=temp;
        }
        invertTree(x->left);
        invertTree(x->right);
        return x;
    }
    bool isSymmetric(TreeNode* root) {
        invertTree(root->left);
        return isSameTree(root->left,root->right);
    }
};