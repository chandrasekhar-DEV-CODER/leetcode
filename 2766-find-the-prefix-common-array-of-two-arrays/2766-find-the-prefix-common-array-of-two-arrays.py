class Solution:
    def findThePrefixCommonArray(self, A: List[int], B: List[int]) -> List[int]:
        re=[]
        for i in range(0,len(A),1):
            a=A[0:i+1]
            b=B[0:i+1]
            c=0
            for j in a:
                if j in b:
                    c+=1
            re.append(c)
        return re
        