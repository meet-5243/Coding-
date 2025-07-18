class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res;
        int prefix = 1;

        for(int i=0;i<nums.size();i++){
            res.push_back(prefix); 
            prefix *= nums[i];
        }
        int postfix = 1;
        for(int i=nums.size()-1;i>=0;i--){
             res[i] *= postfix; 
            postfix *= nums[i];
        }

        return res;
    }
};