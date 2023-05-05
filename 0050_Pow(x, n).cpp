class Solution {
public:
    double myPow(double x, int n) {
        cout<<n<<endl;
        if(n == 0) return 1;
        if(n == 1) return x;
        if(n == -1) return 1.0/x;
        double y = myPow(x,n/2);
        // cout<<n%2<<endl;
        if(n % 2 == 1 ) {
            // cout<<"11111"<<endl;
            // cout<<y*y*x<<endl;
            return y*y*x;
        }
        if(n % 2 == -1) {
            // cout<<"222222"<<endl;
            // cout<<y*y/x<<endl;
            return y*y/x;
        }
        // cout<<y*y<<endl;
        return y*y;
    }
};
