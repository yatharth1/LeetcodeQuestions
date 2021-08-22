class Solution {
public:    
            vector<vector<int>> ans;
    void dfs(int node, vector<vector<int>>& graph, int dest, vector<int> &helper)
    {
        helper.push_back(node);
        if(node==dest){
            ans.push_back(helper);
            helper.pop_back();
            return;
        }
        
        for(auto it : graph[node])
        {
            dfs(it, graph, dest, helper);
        }
        
        helper.pop_back();
    }
    
    
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> help;
        dfs(0, graph, graph.size() - 1, help);
        return ans;
    }              
};