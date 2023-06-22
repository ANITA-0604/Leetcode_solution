class Solution {
public:
    int climbStairs(int n) {
        vector<int> nums;
        nums.push_back(0);
        nums.push_back(1);
        nums.push_back(2);
        for(int i=3;i<=n;i++){

            nums.push_back(nums[i-1]+nums[i-2]);
        }
        return nums[n];
    }
};
