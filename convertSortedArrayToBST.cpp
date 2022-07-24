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
public:a
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty())return nullptr;
            vector<int> a,b;
            for(int i=0;i<nums.size();i++)
            {
                if(i<nums.size()/2)a.push_back(nums[i]);
                else if(i>nums.size()/2)b.push_back(nums[i]);
            }
            TreeNode* t=new TreeNode(nums[nums.size()/2],sortedArrayToBST(a),sortedArrayToBST(b));
            return t;
    }
};