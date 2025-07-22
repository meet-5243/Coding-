class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int> st;
        int maxArea = 0;
        for(int i=0;i<h.size();i++){
            while(!st.empty() && h[st.top()] > h[i]){
                int element = st.top(); st.pop();
                int nse = i;
                int pse  = st.empty() ? -1 : st.top();
                maxArea = max(maxArea, h[element] * (nse - pse - 1));
            }
            st.push(i);
        }

        while(!st.empty()){
            int nse = h.size();
            int element = st.top(); st.pop();
            int pse  = st.empty() ? -1 : st.top();
            maxArea = max(maxArea, h[element] * (nse - pse - 1));
        }

        return maxArea;
    }
};