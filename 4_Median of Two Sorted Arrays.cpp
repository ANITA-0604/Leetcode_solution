class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        vector<int> sorted_arr;

        while(i<nums1.size() || j< nums2.size()){
            
            if( i == nums1.size() ) {
                sorted_arr.push_back(nums2[j]);
                j++;
            }
            else if(j == nums2.size()){
                sorted_arr.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i] <= nums2[j]){
                sorted_arr.push_back(nums1[i]);
                i++;
            }
            else{
                sorted_arr.push_back(nums2[j]);
                j++;
            }
        }
        
        float median = 0;
        int len = sorted_arr.size();
        int mid = len/2;
        // cout<<mid<<endl;
        if (len % 2 == 0){
            // cout<<sorted_arr[mid]<<" "<<sorted_arr[mid-1]<<endl;
            median = float(sorted_arr[mid] + sorted_arr[mid-1])/2;
        }
        else{
            median = sorted_arr[mid];
        }
        return median;
    }
};
