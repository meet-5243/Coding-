class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;

        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            
            int l = i+1;
            int r = nums.size()-1;
            int target = -(nums[i]);

            while(l<r){
                if((nums[l] + nums[r]) == target){
                   result.push_back({nums[i], nums[l], nums[r]});

                    // Skip duplicates for nums[l]
                    while (l < r && nums[l] == nums[l + 1]) l++;
                    // Skip duplicates for nums[r]
                    while (l < r && nums[r] == nums[r - 1]) r--;

                    l++;
                    r--;
                }else if((nums[l] + nums[r]) > target){
                    r--;
                }else{
                    l++;
                }
            }
            
        }

        return result;
    }
};