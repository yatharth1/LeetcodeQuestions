class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num <= 0) return false;
        
        int sum = 0;
        for(int i = 1; i < sqrt(num); i++){
            if(num % i == 0){
                sum += i;
                if(i != sqrt(num)){
                    sum += num/i;
                }
            }
        }
        return sum - num == num;
    }
};