class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        std::multiset<char> ransom_note_set = {std::begin(ransomNote), std::end(ransomNote)};
        std::multiset<char> magazine_set = {std::begin(magazine), std::end(magazine)};
        
        std::multiset<char> diff;
        
        std::set_difference(ransom_note_set.begin(), ransom_note_set.end(),
                            magazine_set.begin(), magazine_set.end(),
                            std::inserter(diff, diff.begin()));
        
        return diff.empty();
    }
};
