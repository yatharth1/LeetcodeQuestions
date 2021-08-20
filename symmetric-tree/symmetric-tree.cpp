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
    bool allConditionCheck(TreeNode* p, TreeNode* q)
    {
        if(p == NULL && q == NULL) return true;
        
        else if(p == NULL || q == NULL) return false;
        
        else if(p -> val != q -> val) return false;
        
        return allConditionCheck(p -> left, q -> right) && allConditionCheck(p -> right, q -> left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        
        if(root == NULL) return true;
        
        return allConditionCheck(root -> left, root -> right);
    }
};