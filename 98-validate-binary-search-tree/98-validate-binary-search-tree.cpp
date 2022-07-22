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
    bool solve(TreeNode* root,long mn,long mx)
    {
        if(!root) return true;
        
        if(root->val<=mn || root->val>=mx) return false;
        
    return (solve(root->left,mn,root->val)&solve(root->right,root->val,mx));
        
    }
    
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        
        long mn=(long)-1e10,mx=(long)1e10;
        
        return solve(root,mn,mx);
    }
};