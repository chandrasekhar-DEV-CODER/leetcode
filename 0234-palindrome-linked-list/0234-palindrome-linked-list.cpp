/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int c=0;
        ListNode* temp = head;
         while(temp != nullptr) {
            temp = temp->next;
            c++;
        }
        int a[c],i=0;
        temp=head;
        while(temp != nullptr) {
            a[i] = temp->val;
            temp = temp->next;
            i++;
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