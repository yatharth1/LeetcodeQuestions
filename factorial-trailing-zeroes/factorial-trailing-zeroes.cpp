class Solution {
public:
    int trailingZeroes(int n) {
        if(n == 0) return 0;
        
        int res  = 0;
        for(int i = 5; i <= n; i = i*5){
            res = res + n/i;
        }
        return res;
        
    }
};