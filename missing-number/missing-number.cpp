class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        vector<int> check(n+1,0);
        for(int i = 0; i < n; i++){
            check[nums[i]]++;
        }
        for(int i = 0; i < check.size(); i++){
            if(check[i] == 0)
                return i;
        }
        return -1;
    }
};