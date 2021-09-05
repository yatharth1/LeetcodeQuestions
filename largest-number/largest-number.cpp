class Solution {
    static bool helper(string a, string b)
    {
        string a1 = a + b;
        string a2 = b + a;
        
       return a1 > a2;
    }
public:
    string largestNumber(vector<int>& nums) {
        
        vector<string> c;
        for(auto i : nums)
        {
            c.push_back(to_string(i));
        }
        
        sort(c.begin(), c.end(), helper);
        
        string res;
        
         for(int i=0;i<c.size();i++)  res+=c[i];
            
        return res[0]=='0'? "0" : res;
        
    }
};