class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> myMap;

        for(int num: nums){
            myMap[num]++;
            if(myMap[num] > 1){
                return num;
            }
        }
        return nums[0];
    }
};