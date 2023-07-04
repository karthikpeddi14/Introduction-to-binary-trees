class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) 
    {
        if(root == NULL) return {};
        vector<int> ans;
        stack<TreeNode*> st;
        st.push(root);
        TreeNode* left_node = st.top()->left;
        while(!st.empty())
        {
            if(left_node!=NULL) 
            {
                st.push(left_node);
                left_node = left_node->left;
            }
            else 
            {
                ans.push_back(st.top()->val);
                TreeNode* temp = st.top()->right;
                st.pop();
                if(temp!=NULL)st.push(temp);
                if(temp!=NULL) left_node = temp->left;
            }
        }
        return ans;
    }
};
