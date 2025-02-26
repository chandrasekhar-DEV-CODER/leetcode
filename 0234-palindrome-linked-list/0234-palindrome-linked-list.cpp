class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int c=0;
        ListNode* temp = head;
        vector<int>a;;
        temp=head;
        while(temp != nullptr) {
            a.push_back(temp->val);
            temp = temp->next;
            c++;
        }

        for(int i=0;i<c/2;i++)
        {
if(a[i]!=a[c-i-1])
{
return false;}
        }
        return true;
    }
};