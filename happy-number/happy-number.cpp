class Solution {
private:
    int getNumber(int n)
    {
        int sum = 0;
        while(n > 0)
        {
            int v = n % 10;
            n = n / 10;
            sum += v * v;
        }
        
        return sum;
    }
public:
    bool isHappy(int n) {
        int slow = n;
        int fast = getNumber(n);
        while(fast != 1 && slow != fast)
        {
            slow = getNumber(slow);
            fast = getNumber(getNumber(fast));
        }
        
        return fast == 1;
    }
};