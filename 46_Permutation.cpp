class Solution {
public:
    void permute_rec(vector<int>& nums,vector<vector<int>> & ans, int idx){
        if(nums.size() == idx){
            ans.push_back(nums);
        }
        for(int j = idx;j < nums.size();j++){
            swap(nums[idx],nums[j]);
            permute_rec(nums,ans,idx+1);
            swap(nums[idx],nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector< vector<int> > ans;
        permute_rec(nums,ans,0);
        return ans;
        
    }
};
