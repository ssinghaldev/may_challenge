from collections import defaultdict

class Solution:
    def firstUniqChar(self, s: str) -> int:
        s_map = defaultdict(int)
        for char in s:
            s_map[char] += 1
        
        for idx, char in enumerate(s):
            if s_map[char] == 1:
                return idx
        
        return -1
