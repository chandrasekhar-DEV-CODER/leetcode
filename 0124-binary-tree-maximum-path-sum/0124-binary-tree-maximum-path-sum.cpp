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
int h(TreeNode* root,int &s)
{
    if(!root)return 0;
    int l=max(0,h(root->left,s));
    int v=max(0,h(root->right,s));
    s=max(s,l+v+root->val);
    return max(l,v)+root->val;
}
    int maxPathSum(TreeNode* root) {
        int s=INT_MIN;
        h(root,s);
        return s;
    }
};