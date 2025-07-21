class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
        // Initialize a 2D vector dp[k][k] with 0
        vector<vector<int>> dp(k, vector<int>(k, 0));

        int ans = 0;

        for (int num : nums) {
            int r = num % k;
            for (int j = 0; j < k; ++j) {
                int newVal = dp[j][r] + 1;
                dp[r][j] = newVal;
                ans = max(ans, newVal);
            }
        }

        return ans;
    }
};
