class Solution {
public:
    int maxArea(vector<int>& height) {
        int size = height.size();
        int left = 0;
        int right = size - 1;
        int maximum = 0;
        while(left <= right){
            int minimum = min(height[left], height[right]);
            int gap = right - left;
            int curr_area = gap * minimum;
            maximum = max(maximum, curr_area);
            if(height[left] <= height[right]) left++;
            else right--;
        }
        return maximum;
    }
};