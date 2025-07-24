class Solution {
public:
    long long func(vector<int>& piles, int k) {
        long long totalHours = 0;
        for (int i = 0; i < piles.size(); i++) {
            totalHours += (piles[i] + k - 1) / k;  // Integer ceiling
        }
        return totalHours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long low = 1;
        long long high = *max_element(piles.begin(), piles.end());
        int ans = high;

        while (low <= high) {
            long long mid = (low + high) / 2;
            long long reqTime = func(piles, mid);
            if (reqTime <= h) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        return ans;
    }
};
