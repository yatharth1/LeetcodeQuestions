class Solution {
public:    
            vector<vector<int>> ans;
    void dfs(int src, vector<vector<int>>& graph, int dest, vector<int> &helper)
    {
        helper.push_back(src);
        if(src==dest){
            ans.push_back(helper);
            helper.pop_back();
            return;
        }
        
        for(auto it : graph[src])
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