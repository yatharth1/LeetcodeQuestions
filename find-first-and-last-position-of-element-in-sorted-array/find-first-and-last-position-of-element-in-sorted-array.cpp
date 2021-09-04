class Solution {
public:
    
    int first(vector<int>& v, int target)
    {
        int left = 0; 
        int right = v.size() - 1;
        while(left <= right)
        {
            int mid = (left + right) / 2;
            if(v[mid] < target)
                left = mid + 1;
            else if(v[mid] > target)
                right = mid - 1;
            else
            {
                if(mid == 0 || v[mid - 1] != v[mid])
                    return mid;
                else
                    right = mid - 1;
            }
        }
        return -1;
    }
    
      int second(vector<int>& v, int target)
    {
        int left = 0; 
        int right = v.size() - 1;
        while(left <= right)
        {
            int mid = (left + right) / 2;
            if(v[mid] < target)
                left = mid + 1;
            else if(v[mid] > target)
                right = mid - 1;
            else
            {
                if(mid == v.size() - 1 || v[mid + 1] != v[mid])
                    return mid;
                else
                    left = mid +1;
            }
        }
        return -1;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        
        int ans1 = first(nums, target);
        int ans2 = second(nums, target);
        vector<int> res;
        res.push_back(ans1);
        res.push_back(ans2);
        return res;
    }
};