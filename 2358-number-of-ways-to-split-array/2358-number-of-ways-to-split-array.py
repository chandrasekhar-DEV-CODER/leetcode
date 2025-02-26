class Solution:
    def waysToSplitArray(self, nums: List[int]) -> int:
        c,p=0,0
        s=sum(nums)
        for i in range(len(nums)-1):
            p+=nums[i]
            su=s-p
            if p>=su:
                c+=1
        return c;
        