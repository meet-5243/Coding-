class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> myMap;

        if(s.size() == t.size()){
            for(char c: s){
                myMap[c]++;
            }
            for(char c: t){
                myMap[c]--;
            }

            for (auto& pair : myMap) {
                if(pair.second != 0) return false;    
            }

            return true;
        }else{
            return false;
        }
    }
};