class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        if(root==NULL) return {};
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        q.push(root);

        while(!q.empty())
        {
            vector<int> per_level;
            int n = q.size();
            while(n--)
            {
                per_level.push_back(q.front()->val);
                if(q.front()->left!=NULL) q.push(q.front()->left);
                if(q.front()->right!=NULL) q.push(q.front()->right);
                q.pop();
            }
            ans.push_back(per_level);
        }
        return ans;
    }
};
