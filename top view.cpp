class Solution
{
    public:
    
    vector<int> topView(Node *root)
    {
        if(root==NULL) return {};
        queue<pair<Node*,int>>q;
        map<int,int> mpp;
        q.push({root,0});
        
        while(!q.empty())
        {
            int n =q.size();
            
            while(n--){
            auto it = q.front();
            if(mpp.find(it.second)==mpp.end()) mpp[it.second] = it.first->data;
            q.pop();
            if(it.first->left!=NULL) q.push({it.first->left,it.second-1});
            if(it.first->right!=NULL) q.push({it.first->right,it.second+1});
            }
        }
        
        vector<int> ans;
        for(auto it:mpp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }

};
