class Solution {
public:
    bool isPerfectSquare(long num) {
        if(num == 1) return true;
        long x = num/2;
        long sqr = x * x;
        while(sqr > num){
            x /=2;
            sqr = x*x;
        }

        for(long  i = x ; i < 2*x ; i++){
            if( i * i == num) return true;
        }
        return false;

    }
};
