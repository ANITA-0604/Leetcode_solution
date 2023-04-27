class Solution {
public:

    int trap(vector<int>& height) {
        int left_h = height[0];
        int right_h = height[height.size()-1];
        int left = 0;
        int right = height.size()-1;
        int ans = 0;

        while(left < right){
            // cout <<left<<" "<<right<<endl;
            // cout <<left_h<<" "<<right_h<<endl;
            if( left_h < right_h){
                if( left_h <= height[left+1]){
                    left++;
                    left_h = height[left];
                }
                else{
                    ans +=  left_h - height[left+1];
                    left++;
                }
            }
            else{
                if( right_h <= height[right-1]){
                    right--;
                    right_h = height[right];
                }
                else{
                    ans +=  right_h - height[right-1];
                    right--;
                }
            }
        }
        return ans;
    }
};
