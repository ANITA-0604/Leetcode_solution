class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for(int i=1;i<strs.size();i++){
            string temp_prefix = "";
            for(int j = 0 ; j < prefix.length() && j < strs[i].length() ;j++){
                if(strs[i][j] != prefix[j]) break;
                temp_prefix += prefix[j];
            }
            prefix = temp_prefix;
        }
        return prefix;
    }
};
