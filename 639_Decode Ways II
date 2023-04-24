class Solution {
public:
    int ways(char c){
        if(c == '0') return 0; 
        else if(c=='*') return 9;
        else return 1;
    }
    int ways1(char c1,char c2){
        if(c1 == '*' && c2 == '*')
            return 15;
        else if(c1 == '*'){
            if(c2 >='0'&& c2 <= '6') return 2;
            else return 1;
        }
        else if (c2 == '*'){
            if(c1 == '1') return 9;
            else if(c1 == '2') return 6;
            else return 0;
            
        }
        else {
            int p = (c1-'0')*10+c2-'0';
            return p >=10 &&p <=26;
        }
    }
    int numDecodings(string s) {
        if(s.empty()) return 0;
        
        int m = 1e9+7;
        long dp[2] = {1,ways(s[0])};
        for(int i = 1;i <s.size();i++){
            long dp_i = dp[1]*ways(s[i])+dp[0] * ways1(s[i-1],s[i]);
            dp_i %= m;
            dp[0] = dp[1];
            dp[1] = dp_i;
        }
        return dp[1];
        
    }
};
