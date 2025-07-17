class Solution {
public:
    vector<long long> sumOfThree(long long num) {
     vector<long long> temp;
        if (num % 3 != 0) return temp;  // Not divisible by 3, no such triplet

        long long x = num / 3;
        temp.push_back(x - 1);
        temp.push_back(x);
        temp.push_back(x + 1);
        return temp;
    }
};