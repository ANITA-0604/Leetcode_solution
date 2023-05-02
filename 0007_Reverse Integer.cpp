class Solution {
public:
    int reverse(int x) {
        


        string str = to_string(x);
        int len = str.length();
        long int ans_int = 0;
        if(x<0) len-=1;
        for(int i=0;i<len;i++){
            int temp = x % 10;
            // cout<<temp<<endl;
            // cout<<x<<endl;
            ans_int = ans_int*10 + temp;
            // cout<<ans_int<<endl;
            x /= 10;
        }     
        // cout<<ans_int<<endl;  
        if( ans_int > pow(2,31)|| ans_int < pow(-2,31)) return 0;
        return ans_int;
    }
};
