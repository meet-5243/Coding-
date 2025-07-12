class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        vector<int> res;
        unordered_map<int, int> mpp;

        for (int num : nums) {
            mpp[num]++;
        }

        for (auto& pair : mpp) {
            int num = pair.first;

            if (mpp[num] == 1 && mpp.count(num - 1) == 0 && mpp.count(num + 1) == 0) {
                res.push_back(num);
            }
        }

        return res;
    }
};
