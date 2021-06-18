class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans = {nums[0]};
        
        for(int i = 1; i < n; i++){
            ans.push_back(ans.back() + nums[i]);
        }
        return ans;
        
        
        
    }
};