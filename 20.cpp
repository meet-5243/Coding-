class Solution {
public:

    bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']');
}


    bool isValid(string s) {
        stack<char> st;
    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else if (ch == ')' || ch == '}' || ch == ']') {
            if (st.empty() || !isMatching(st.top(), ch)) {
                return false;  // Mismatch or stack empty before match
            }
            st.pop();  // Matching bracket found
        }
    }
    return st.empty();  // True if no unmatched brackets
    }

};