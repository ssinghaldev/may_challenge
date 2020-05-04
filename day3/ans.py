from collections import defaultdict

class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        ransom_note_map = defaultdict(int)
        for char in ransomNote:
            ransom_note_map[char] += 1
        
        for char in magazine:
            if char in ransom_note_map and ransom_note_map[char] != 0:
                ransom_note_map[char] -= 1
        
        return sum(ransom_note_map.values()) == 0
