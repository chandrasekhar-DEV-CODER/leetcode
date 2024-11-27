class Solution:
    def kidsWithCandies(self, candies: List[int], extraCandies: int) -> List[bool]:
        m=max(candies)
        mm=[(candy+extraCandies)>=m for candy in candies]
        return mm