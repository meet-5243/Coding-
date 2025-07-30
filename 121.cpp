class Solution {
public:
    int maxProfit(vector<int>& p) {
        int profit = 0;
        int left = 0;
        int right = 0;
       while (right < p.size()) {
        if (p[right] > p[left]) {
            profit = max(profit, p[right] - p[left]);
        } else {
            left = right; // Move buy pointer to a lower price
        }
        right++;
    }

        return profit;
    }
};