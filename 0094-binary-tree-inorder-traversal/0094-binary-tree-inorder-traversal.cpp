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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>a;
        if(root==NULL)return a;
        stack<TreeNode *>s;
TreeNode *n=root;
        while(true){
            if(n!=NULL){
                s.push(n);
                n=n->left;
            }
            else{
                if(s.empty()==true)break;
                n=s.top();
                s.pop();
                a.push_back(n->val);
                n=n->right;
            }
        }
        return a;
    }
};