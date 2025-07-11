class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;int j=numbers.size()-1;
        vector<int> res;
        while(j>=i){
            if((numbers[i]+numbers[j]) == target){
                res.push_back(++i);
                res.push_back(++j);
                break;
            }else if((numbers[i]+numbers[j]) > target){
                j--;
            }else if((numbers[i]+numbers[j]) < target){
                i++;
            }
        }
        return res;
    }
};