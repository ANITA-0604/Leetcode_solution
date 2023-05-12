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
private:
void recur(vector<int> &ans, TreeNode*  cur){
    if(cur == nullptr) return; 
       
    
    recur(ans, cur->left);
    recur(ans, cur->right);
    ans.push_back(cur->val);
}
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode *cur = root;
        recur(ans, cur);
        return ans;
        
    }

};
