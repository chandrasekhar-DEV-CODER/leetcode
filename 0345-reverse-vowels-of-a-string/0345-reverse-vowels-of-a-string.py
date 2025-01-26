class Solution:
    def reverseVowels(self, s: str) -> str:
        a=''
        b=''
        i,j=0,len(s)-1
        s= list(s)
        a=['a','e','i','o','u','A','E','I','O','U']
        while(i<j):
            while(i<j and s[i] not in a):
                i+=1
            while(i<j and s[j] not in a):
                j-=1
            s[i],s[j]=s[j],s[i]
            i+=1
            j-=1
        return ''.join(s)