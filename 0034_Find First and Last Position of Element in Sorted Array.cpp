class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        bool start_bool = false;
        int start = 0 ,end = 0;
        for(int i=0;i<nums.size();i++){
            if(!start_bool && nums[i]==target){
                start = i;
                end = i ;
                start_bool = true;
                // cout<<"yes"<<endl;
                // cout<<start<<" "<<end<<endl;
            }
            else if(start_bool && nums[i]==target){
                end = i ;
            }
            else if(nums[i]>target) break;
        }
        
        if(!start_bool) {
            vector<int> ans ;
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;

        }
        else {
            vector<int> ans ;
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
    }
};
