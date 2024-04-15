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
    int sum=0;
public:
    int sumNumbers(TreeNode* root) {
        if (!root)
            return 0;
        if (!root->left && !root->right)
        {
            sum = root->val*10+root-
        }
        if (root->right)
        {
            sum2 = root->val*10;
            sum2 = sum2 + root->right->val;
            
            sumNumbers(root->right);
        }
        return (sum1+sum2);
    }
};
