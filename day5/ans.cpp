class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> s_map;
        for(char c : s) {
            if(s_map.find(c) == s_map.end()) {
                s_map[c] = 1;
            } else {
                s_map[c] += 1;
            }
        }
        
        int i = 0;
        for(char c: s) {
            if(s_map[c] == 1) {
                return i;
            }
            i += 1;
        }
        
        return -1;
    }
};
