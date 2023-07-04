class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) 
    {
        if(root==NULL) return {};
        vector<int> ans;
        stack<TreeNode*> st;
        st.push(root);

        while(!st.empty())
        {
            ans.push_back(st.top()->val);
            TreeNode* temp = st.top();
            st.pop();
            if(temp->right!=NULL) st.push(temp->right);
            if(temp->left!=NULL) st.push(temp->left);
        }
        return ans;
    }
};
