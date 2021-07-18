class Solution {
public:
    bool rotateString(string s, string goal) {
        int l1 = s.length();
        int l2 = goal.length();
        
        if(l1 != l2) return false;
        
        
        string temp = goal + goal;
        if(temp.find(s) != string::npos)
            return true;
        
        return false;
    }
};