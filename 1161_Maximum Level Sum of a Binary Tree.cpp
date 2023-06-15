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
    int maxLevelSum(TreeNode* root) {

        if (root == NULL) return 0;
        queue<TreeNode*> q;
        q.push(root);
        int maxsum = INT_MIN;
        int level = 0, sum=0;
        int cnt_level = 1;
        while(!q.empty()){

            int cnt = q.size();
            // cout<<cnt<<endl;
            while(cnt--){
                TreeNode * temp = q.front();
                q.pop();

                sum = sum + temp->val;

                if(temp->left != NULL) q.push(temp->left);
                if(temp->right != NULL) q.push(temp->right);

            }
            // cout<<sum<<endl;
            if(maxsum < sum) {
                maxsum = sum;
                level  = cnt_level;
            }
            cnt_level++;
            sum = 0;

        }
        return level;
    }
};
