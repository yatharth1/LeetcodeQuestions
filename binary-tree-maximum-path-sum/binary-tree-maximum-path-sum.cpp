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
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        maxPathSumHelper(root, maxi);
        return maxi;
    }
private:
    int maxPathSumHelper(TreeNode *node, int &maxi)
    {
        if(node == NULL) return 0;
        
        int left = maxPathSumHelper(node -> left, maxi);
        if(left < 0) left = 0;
        int right = maxPathSumHelper(node -> right, maxi);
        if(right < 0) right = 0;
        
        maxi = max(maxi, node -> val + left + right);
        
        return node -> val + max(left, right);
    }
};