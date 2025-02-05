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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>r;
        if(root==NULL)
        {
            return r;
        }
        queue<TreeNode *>q;
        bool f=true;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<int>ar(s);
            for(int i=0;i<s;i++)
            {
                TreeNode *n=q.front();
                q.pop();
                int in=f?i:s-i-1;
                ar[in]=n->val;
                if(n->left)
                {
                    q.push(n->left);
                }
                if(n->right){
                    q.push(n->right);
                }
            }
            r.push_back(ar);
            f=!f;
        }
        return r;
    }
};