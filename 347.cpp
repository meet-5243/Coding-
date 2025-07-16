class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int, int> freqMap;
        for (int num : nums) {
            freqMap[num]++;
        }

        // Min-heap to store top k frequent elements
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;

        for (auto& pair : freqMap) {
            minHeap.push({pair.second, pair.first});  // (frequency, number)

            if (minHeap.size() > k) {
                minHeap.pop();
            }
        }

        vector<int> result;
        while (!minHeap.empty()) {
            result.push_back(minHeap.top().second);  // Extract number
            minHeap.pop();
        }

        // Optional: reverse if you want the most frequent first
        reverse(result.begin(), result.end());

        return result;

    }
};