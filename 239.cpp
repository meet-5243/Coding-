class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       int n = nums.size();
        priority_queue<pair<int, int>> pq;
        vector<int> v;
        for(int i=0; i<k; i++) {
            pq.push({nums[i], i});
        }
        v.push_back(pq.top().first);
        int l=0, r=k;

        while(r<n) {
            pq.push({nums[r], r});
            l++;
            while(l>pq.top().second) pq.pop();
            r++;
            v.push_back(pq.top().first);
        }
        return v;
    }
};