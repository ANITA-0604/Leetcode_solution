class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = 0;
        for(i = 0;i<nums.size();i++){
            bool find = 0;
            for(j =i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    find = 1;
                    break;
                }
            }
            if(find){
                break;
            }
        }
    vector<int> ans ;
    ans.push_back(i);
    ans.push_back(j);
    return ans;
    }
};
