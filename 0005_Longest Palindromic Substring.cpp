class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size() <= 1) return s;
        int len = s.length();

        bool state[len][len];
        for(int i=0;i<len;i++){
            for(int j=0;j<len;j++){
                state[i][j] = true;
            }
        }
        // cout<<"len:"<<len<<endl;
        int longest_length = 1, longest_start = 0;
        for(int i = len-1 ; i>=0 ; i--){
           for (int j = i+1; j < len ; j++) {
   
                if(j - i == 1 && s[i] != s[j]){
                    state[i][j] = false;
                }
                else if( j - i != 1 && (s[i]!= s[j] || !state[i+1][j-1])){
                    state[i][j] = false; 
                }
                // cout<<i<<" "<<j<<endl;
                // cout<<state[i][j]<<endl;
                if (state[i][j] && j - i + 1 >= longest_length) {
                    // cout<<i<<" "<<j<<endl;
                    longest_length = j - i + 1;
                    longest_start = i;
                }
            } 
        }
        // for(int i = 0;i<len;i++){
        //     for(int j=0;j<len;j++){
        //         cout<< state[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        string ans = "";
        for(int i = 0;i< longest_length;i++){
            ans += s[longest_start +i];
        }
        return  ans;
        
    }
};
