class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int maxLen = 0;
        int maxCount = 0;
        int left = 0;

        vector<int> freq(26, 0); // for 'A' to 'Z'

        for (int right = 0; right < n; right++) {
            freq[s[right] - 'A']++;
            maxCount = max(maxCount, freq[s[right] - 'A']);

            // If number of chars to change > k, shrink the window
            if ((right - left + 1) - maxCount > k) {
                freq[s[left] - 'A']--;
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};
