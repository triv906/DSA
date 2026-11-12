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
int solve(TreeNode *curr,unordered_map<TreeNode *,int>&dp){
    if(curr==nullptr){
        return 0;
    }
    if(dp.find(curr)!=dp.end()){
        return dp[curr];
    }
    int pick=curr->val;
    if(curr->left){
        pick+=solve(curr->left->left,dp)+solve(curr->left->right,dp);
    }
    if(curr->right){
        pick+=solve(curr->right->left,dp)+solve(curr->right->right,dp);
    }
    int notPick=solve(curr->left,dp)+solve(curr->right,dp);

return dp[curr]=max(pick,notPick);
}
    int rob(TreeNode* root) {
    unordered_map<TreeNode *,int>dp;
    return solve(root,dp);
    }
};