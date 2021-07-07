class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int size = nums.size();
        
        int low = 0;
        int high = size;
         int mid = (low + high) / 2;
        
        while(low <= high){
             mid = (low + high) / 2;
            
            if((mid == 0 || nums[mid] > nums[mid - 1]) && (mid == size - 1 || nums[mid] > nums[mid + 1])){
                return mid;
            }else if(mid > 0 && nums[mid] < nums[mid - 1]){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return mid;
    }
};