class Solution {
public:
    bool isPalindrome(string s) {
 if (s.empty()) return true;

        // Convert to lowercase
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        string temp = "";

        // Keep only alphanumeric characters
        for (char ch : s) {
            if (isalnum(ch)) {
                temp += ch;
            }
        }

        // Two-pointer check
        int left = 0, right = temp.length() - 1;

        while (left < right) {
            if (temp[left] != temp[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};