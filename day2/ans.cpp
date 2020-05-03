class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count = 0;
        std::set<char> set_j = {std::begin(J), std::end(J)};
        
        for(const auto& stone: S) {
            if(set_j.find(stone) != set_j.end()) {
                count += 1;
            }
        }
        
        return count;
    }
};