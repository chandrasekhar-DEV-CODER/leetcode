from collections import Counter
from typing import List

class Solution:
    def wordSubsets(self, words1: List[str], words2: List[str]) -> List[str]:
        # Precompute the maximum frequency requirement for each character across all words in words2
        max_freq = Counter()
        for b in words2:
            b_freq = Counter(b)
            for char in b_freq:
                max_freq[char] = max(max_freq[char], b_freq[char])
        
        # Check each word in words1
        result = []
        for a in words1:
            a_freq = Counter(a)
            # Check if `a` satisfies the maximum frequency requirement
            if all(a_freq[char] >= max_freq[char] for char in max_freq):
                result.append(a)
        
        return result
