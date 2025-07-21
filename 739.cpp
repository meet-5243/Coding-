class Solution {
 public:
//     vector<int> dailyTemperatures(vector<int>& t) {
//         int n1 = t.size();
//         vector<int> res(n1,0);

//         for(int i=0;i<n1-1;i++){
//             int count = 0;
//             int num = t[i];
//             for(int j=i+1;j<n1;j++){
//                 if(j==n1) break;
//                 if(t[j] > num){
//                     ++count;
//                     res[i] = count;break;
//                 }else{
//                     count++;
//                 }
//             }
//         }

//         return res;
//     }
// 

vector<int> dailyTemperatures(vector<int>& t) {
    int n = t.size();
    vector<int> res(n, 0);        // Result vector initialized with 0s
    stack<int> st;                // Monotonic decreasing stack (stores indices)

    for (int i = 0; i < n; ++i) {
        // While current temperature is greater than the top of the stack
        while (!st.empty() && t[i] > t[st.top()]) {
            int idx = st.top();   // Index where we found a colder temp
            st.pop();
            res[idx] = i - idx;   // Calculate number of days to warmer temp
        }
        st.push(i);               // Push current index to stack
    }

    return res;
}

};
