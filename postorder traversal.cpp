class Solution {
public:
void post_order(TreeNode* root , vector<int>& ans)
{
    if(root == NULL) return;
    
    post_order(root->left , ans);
    post_order(root->right , ans);
    ans.push_back(root->val);
}
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        post_order(root,ans);
        return ans;
    }
};
