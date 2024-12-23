class Solution {
public:
    int minimumOperations(TreeNode* root) 
    {
        if(root == nullptr)
            return 0;
        //BFS + for each level find sort for min swap
        //values array, sorted values array
        //both should match -if not need swap and count the #of swaps
        //but to find correct Index, we can use map( unordered) with value as key and index as valuue.
        queue<TreeNode*> q;       
        int totalswaps  = 0;
        q.push(root);

        while(!q.empty())
        {
            int len = q.size();
            vector<int> values;
            unordered_map<int, int> valuemap;
            for(int i=0; i<len; i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                values.push_back(temp->val);
                valuemap[temp->val] = i;

                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
         
            vector<int> sortedvalues = values;
            sort(sortedvalues.begin(), sortedvalues.end());

            for(int i=0; i<values.size(); i++)
            {
                if(sortedvalues[i] != values[i])
                {
                    totalswaps++;
                    int correctIndex = valuemap[sortedvalues[i]];
                    swap(values[i], values[correctIndex]);
                    valuemap[values[correctIndex]] = correctIndex;
                    valuemap[values[i]] = i;                   
                }
            }
        }
        return totalswaps;  
    }
};