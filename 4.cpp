class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> temp;
        for(int i=0;i<nums1.size();i++){
            temp.push_back(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            temp.push_back(nums2[i]);
        }
        sort(temp.begin(),temp.end());
        float ans;
        int n = temp.size();
        if(n%2==0){
            int idx = n/2;
            ans = (float)(temp[idx] + temp[idx-1]) /2;
        }else{
            int idx = n/2;
            ans = (float)temp[idx];
        }
        return ans;
    }
};