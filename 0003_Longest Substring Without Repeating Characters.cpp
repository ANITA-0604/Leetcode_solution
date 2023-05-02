class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = s.length();
        int max_l = 0;
        vector<int> chars(128,0);

        int left = 0 ,right = 0;

        while(right < len){
            char cur = s[right];
            chars[cur]++;

            while(chars[cur]>1){
                char l_most = s[left];
                chars[l_most]--;
                left ++;
            }
            max_l = max(max_l,right-left+1);
            right++;


        }
        return max_l;

        
    }
};
