class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mp;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
        int currEle = nums[i];
        int x = target - currEle; 
            if(mp.count(x)){
                res.push_back(i);
                res.push_back(mp[x]);
                return res;
            }
            mp[currEle] = i;
        }
        return res;
    }
};