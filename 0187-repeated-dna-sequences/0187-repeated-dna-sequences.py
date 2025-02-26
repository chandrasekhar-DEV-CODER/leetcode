class Solution:
    def findRepeatedDnaSequences(self, s: str) -> list[str]:
        l, r = 0, 10  # r should be 10, not 11, for 10-letter-long sequences
        seen = set()  # To track all seen 10-letter sequences
        result = set()  # To store sequences that appear more than once
        
        while r <= len(s):  # Ensure r doesn't exceed string length
            sub = s[l:r]
            if sub in seen:
                result.add(sub)
            seen.add(sub)
            l += 1
            r += 1
        
        return list(result)
