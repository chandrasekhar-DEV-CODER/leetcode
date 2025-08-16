int maximum69Number (int num) {
    char ans[100];
    sprintf(ans,"%d",num);
    for(int i=0;i<strlen(ans);i++)
    {
        if(ans[i]=='6')
        {
            ans[i]='9';
            break;
            
        }
    }
    return atoi(ans);
    
}