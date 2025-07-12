class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        long long left = 0, total = 0;
        int res = 0;

        for (int right = 0; right < nums.size(); right++) {
            total += nums[right];

            // Check the condition that the window is valid or not if not means if the while condition is true than its not valid so decrease the size means shift left poinyer
            while ((long long)(right - left + 1) * nums[right]  > k + total) {
                total -= nums[left];
                left++;
            }
                if(right-left+1 > res){
                    res = right - left + 1;
                }
            
        }

        return res;
    }
};