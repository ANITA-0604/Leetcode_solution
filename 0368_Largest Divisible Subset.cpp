class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        vector<int> dp(nums.size(),0),parent(nums.size(),0);
        int mx_length=0, mx_idx;
        for(int i = nums.size()-1; i >= 0;i--){
            for(int j = i;j < nums.size() ; j++){
                if(nums[j] % nums[i]== 0 && dp[i] < dp[j]+1){
                    dp[i] = dp[j]+1;
                    parent[i] = j;
                    if(mx_length < dp[i]){
                        mx_length = dp[i];
                        mx_idx = i;
                    }
                }
            }
        }
        for(int i = 0 ; i <mx_length;i++){
            cout<<nums[mx_idx]<<endl;
            ans.push_back(nums[mx_idx]);
            mx_idx = parent[mx_idx];
        }
        return ans;
    }
};
