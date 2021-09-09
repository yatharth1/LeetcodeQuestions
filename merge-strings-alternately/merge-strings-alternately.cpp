class Solution {
public:
    string mergeAlternately(string word1, string word2) {
     
        int i = 0;
        string ans = "";
        
        int n = word1.size();
        int m = word2.size();
        
        while(i < n && i < m)
        {
            ans += word1[i];
            ans += word2[i];
            i++;
        }
        
        while(i < n) ans += word1[i++];
        while(i < m) ans += word2[i++];
        
        return ans;
    }
};