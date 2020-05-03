class Solution:
    def numJewelsInStones(self, J: str, S: str) -> int:
        count = 0
        set_j = set(J)
        for stone in S:
            if stone in set_j:
                count += 1
        
        return count