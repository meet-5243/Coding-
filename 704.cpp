class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        int ans = -1;

        while(left <= right){
            int mid = (left + right) / 2;
            if(nums[mid] == target){
                ans = mid;
                break;
            }
            else if(nums[mid] < target){
                left = mid + 1;
            }else{
                right = mid - 1;
            }
        }

        return ans;
    }
};  