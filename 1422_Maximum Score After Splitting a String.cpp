class Solution {
public:
    int maxScore(string s) {
        int max_s = 0;
        for(int i = 1;i < s.length(); i++){
            int temp_s = 0;
            for(int j = 0; j <s.length();j++){
                if(j < i && s[j]== '0') temp_s++;
                if(j >= i && s[j] == '1') temp_s++;
            }

            if(temp_s > max_s) max_s = temp_s;
        }
        return max_s;
    }
};
