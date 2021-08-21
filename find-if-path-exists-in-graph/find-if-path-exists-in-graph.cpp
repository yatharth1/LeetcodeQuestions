class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        
        //Convertig Into Graph
        vector<vector<int>> graph(n);
        for(int i = 0; i < edges.size(); i++)
        {
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        
        queue<int> q;
        vector<bool> visited(n , 0);
        q.push(start);
        visited[start] =  true;
        
        while(!q.empty())
        {
            int top = q.front();
            q.pop();
            
            if(top == end)
                return true;
            
            for(auto it : graph[top])
            {
                if(!visited[it])
                {
                    visited[it] = true;
                    q.push(it);
                }
            }
        }
        
        return false;
        
    }
};