class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> mp;

        for(auto x:s)
            mp[x]++;
        int check = mp[s[0]];
        for(auto x:mp){
            if(check != x.second)
                return false;
        }
        return true;
    }
};