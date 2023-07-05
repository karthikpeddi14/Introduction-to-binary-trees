class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if(root ==NULL ) return {};
        vector<int> ans;
        stack<TreeNode*> st1;
        stack<TreeNode*> st2;
        st1.push(root);

        while(!st1.empty())
        {
            st2.push(st1.top());
            TreeNode* temp = st1.top();
            st1.pop();
            if(temp->left!=NULL) st1.push(temp->left);
            if(temp->right!=NULL) st1.push(temp->right);
        }

        while(!st2.empty())
        {
            ans.push_back(st2.top()->val);
            st2.pop();
        }
        return ans;
        
    }
};
