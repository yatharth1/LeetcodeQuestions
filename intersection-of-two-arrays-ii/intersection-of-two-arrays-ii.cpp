class Solution {
    vector<int> helper(vector<int>& a1, vector<int>& a2){
        sort(a1.begin(), a1.end());
        sort(a2.begin(), a2.end());
        vector<int> res;
        int n = a1.size();
        int m = a2.size();
        int i = 0;
        int j = 0;
        while(i < n && j < m)
        {
            if(a1[i] == a2[j])
            {
                res.push_back(a1[i]);
                i++;
                j++;
            }else if(a1[i] < a2[j])
            {
                i++;   
            }else
                j++;
        }
        return res;
    }
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
       ans = helper(nums1, nums2);
        return ans;
        
        
    }
};