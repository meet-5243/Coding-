class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_map<int, int> myMap;
        bool f = false;

        for(int i=0;i<nums.size();i++){
            myMap[nums[i]]++;
        }

        for (auto& pair : myMap) {
            if(pair.second >1)
            {
                f = true;
                break;
            }
        }

        return f;

    }
};