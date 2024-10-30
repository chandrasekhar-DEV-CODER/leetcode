/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* ar, int n, int t, int* returnSize)
 {
    *returnSize=2;
    int *re=(int*)malloc(*returnSize*sizeof(int));
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ar[i]+ar[j]==t)
            {
                re[0]=i;
                re[1]=j;
                return re;
            }
        }
    }
    *returnSize=0;
    return NULL;
}
