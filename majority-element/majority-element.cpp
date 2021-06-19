class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int count = 1;
        int res = nums[0];
        for(int i = 1; i < nums.size(); i++){
            if(res == nums[i]){
                count++;
            }else{
                count--;
            }
            if(count == 0){
                res = nums[i];
                count = 1;
            }
        }
        return res;
    }
};

//freq[a[i]]