class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int idx1 = 0,idx2 = 0;
        vector<int> ans;
        while(m > 0 || n > 0){
           
            if(m==0){
                n--;
                cout<<nums2[idx2]<<endl;
                ans.push_back(nums2[idx2]);
                idx2++;
                continue;
            }
            if(n==0){
                m--;
                cout<<nums1[idx1]<<endl;
                ans.push_back(nums1[idx1]);
                idx1++;
                continue;
            }
            if( nums1[idx1]< nums2[idx2] ){
                m--;
                cout<<nums1[idx1]<<endl;
                ans.push_back(nums1[idx1]);
                idx1++;
            
            }
            else if(nums1[idx1]>= nums2[idx2] ){
                n--;
                cout<<nums2[idx2]<<endl;
                ans.push_back(nums2[idx2]);
                idx2++;
            }
            
        }
        nums1 = ans;
        
    }
};
