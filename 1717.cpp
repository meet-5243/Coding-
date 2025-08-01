class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char> st;
        long long ans = 0;

        if (y > x) {
            // First remove "ba"
            for (char c : s) {
                if (!st.empty() && c == 'a' && st.top() == 'b') {
                    ans += y;
                    st.pop();
                } else {
                    st.push(c);
                }
            }

            // Now remove "ab" from remaining
            string rem = "";
            while (!st.empty()) {
                rem += st.top();
                st.pop();
            }
            reverse(rem.begin(), rem.end());

            for (char c : rem) {
                if (!st.empty() && c == 'b' && st.top() == 'a') {
                    ans += x;
                    st.pop();
                } else {
                    st.push(c);
                }
            }
        } else {
            // First remove "ab"
            for (char c : s) {
                if (!st.empty() && c == 'b' && st.top() == 'a') {
                    ans += x;
                    st.pop();
                } else {
                    st.push(c);
                }
            }

            // Now remove "ba" from remaining
            string rem = "";
            while (!st.empty()) {
                rem += st.top();
                st.pop();
            }
            reverse(rem.begin(), rem.end());

            for (char c : rem) {
                if (!st.empty() && c == 'a' && st.top() == 'b') {
                    ans += y;
                    st.pop();
                } else {
                    st.push(c);
                }
            }
        }

        return ans;
    }
};
