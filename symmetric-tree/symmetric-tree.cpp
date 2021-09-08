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
    bool conditions(TreeNode* left, TreeNode* right)
    {
       if(left == NULL || right == NULL)
       {
           if(left == right) return true;
           return false;
       }
        
        if(left->val != right-> val) return false;
        
        return conditions(left -> left, right -> right)
            &&
            conditions(left -> right, right -> left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        
        if(root == NULL) return false;
        
        return conditions(root -> left, root -> right);
    }
};