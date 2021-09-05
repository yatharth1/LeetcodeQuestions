class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        for(auto it : strs)
        {
            string str = it;
            sort(str.begin(), str.end());
            map[str].push_back(it);
        }
        
        vector<vector<string>> res;
        
        for(auto i : map)
        {
            res.push_back(i.second);
        }
        
        return res;
    }
};