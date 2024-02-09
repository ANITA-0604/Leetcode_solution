class Solution {
public:
    int firstUniqChar(string s) {
        int ans_pos = -1;
        vector<bool> dup(s.length(),0);
        for(int i  = 0; i < s.length();i++){
            if(dup[i]) continue;
            for(int j = i+1;j<s.length();j++){
                if(s[i]==s[j]){
                    dup[i] = 1;
                    dup[j] = 1;
                }
            }
            if( ! dup[i] ){
                ans_pos = i;
                break;
            }
        }
        
        return ans_pos;
    }
};
