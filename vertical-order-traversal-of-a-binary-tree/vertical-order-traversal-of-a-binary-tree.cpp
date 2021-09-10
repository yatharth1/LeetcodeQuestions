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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        queue<pair<int, pair<TreeNode*, int>>> q;
        map<int, map<int, multiset<int>>> nodes;
        
        q.push({0, {root, 0}});
        
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            
            int vertical = p.first;
            TreeNode* temp = p.second.first;
            int level = p.second.second;
            
            nodes[vertical][level].insert(temp -> val);
            
            if(temp -> left)
                q.push({vertical - 1, {temp -> left, level + 1}});
            if(temp -> right)
                q.push({vertical + 1, {temp -> right, level + 1}});
        }
        
        vector<vector<int>> ans;
        
        for(auto p : nodes)
        {
            vector<int> col;
            for(auto q : p.second)
            {
                col.insert(col.end(), q.second.begin(), q.second.end());           
            }
            ans.push_back(col);
        }
        return ans;
        
        
    }
};