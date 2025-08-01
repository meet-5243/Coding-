class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int arr[256];
        for(int i = 0; i < 256; i++){
            arr[i] = -1;
        }

        int l = 0;
        int r = 0;
        int n = s.size();
        int len = 0;
        int maxLen = 0;

        while(r < n){
            if(arr[s[r]] != -1 && arr[s[r]] >= l){
                l = arr[s[r]] + 1;
            }

            len = r - l + 1;
            maxLen = max(maxLen, len);
            arr[s[r]] = r;
            r++;
        }

        return maxLen;
    }
};
