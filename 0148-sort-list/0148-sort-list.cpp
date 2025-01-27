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
    ListNode* sortList(ListNode* head) {
        vector<int>a;
        ListNode* h=head;
        while(h!=NULL)
        {
            a.push_back(h->val);
            h=h->next;
        }
        sort(a.begin(),a.end());
        if (a.empty()) return nullptr;
        ListNode* aa=new ListNode(a[0]);
        ListNode* a1=aa;
        for(int i=1;i<a.size();i++)
        {
           ListNode* t=new ListNode(a[i]);
           a1->next=t;
           a1=a1->next;
        }
        return aa;
    }
};