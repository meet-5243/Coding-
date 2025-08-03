class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int, int> myMap;
        if(nums.size()==1) return nums[0];
        int ans = 0;
        for(int num : nums){
            if(num > 0){
                myMap[num]++;
            }
        }

        if (myMap.empty()) {
            return *max_element(nums.begin(),nums.end());
        }

        for (auto& pair : myMap) {
            ans += pair.first;
        }

        return ans;

    }
};