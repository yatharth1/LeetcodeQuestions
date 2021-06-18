class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
         int n = nums.size();
        
       if(n == NULL) return 1;
       
        int containsOne = 0;
        
        for(int i = 0; i < n; i++){
            if(nums[i] == 1){
                containsOne = 1;
            }else if(nums[i] <= 0 || nums[i] > n){
                nums[i] = 1;
            }
        }
        if(containsOne == 0) return 1;
        
        for(int i = 0; i < n;i++){
            int index = abs(nums[i]) - 1;
            if(nums[index] > 0) nums[index] = -1 * nums[index];
        }
        
        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                return i + 1;
            }
        }
        return n + 1;
        
        
    }
};