class Solution:
    def findComplement(self, num: int) -> int:
        bin_num = bin(num)
        
        bin_complement_num = list(bin_num[0:2])
        bin_complement_num.extend(['0' if char == '1' else '1' for char in bin_num[2:]])
        
        return int(''.join(bin_complement_num), 2)
