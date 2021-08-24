class Solution {
public:
    
    void dfs(int src, vector<vector<int>>& M, vector<int>& vis)
    {
        vis[src] = 1;
        
        for(int i = 0; i < M.size(); i++)
        {
            if(M[src][i] == 1 && !vis[i])
                dfs(i, M, vis);
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int ans = 0;
        vector<int> vis(isConnected.size(), 0);
        int src = 0;
        
        for(int i = 0; i < isConnected.size(); i++)
        {
            if(!vis[i])
            {
                ans++;
                dfs(i, isConnected, vis);
            }
        }
        
        return ans;
    }
};