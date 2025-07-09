class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        int i=0;
        while(i<(2*n)){
            nums[i+2]=nums[i+1];
            nums[i+1] = nums[n++];
            i+=2;
        }
       
        return nums;
    }
};