/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
        ListNode *a=h1;
        ListNode *b=h2;
        while(a!=b){
            a=a==NULL?h2:a->next;
            b=b==NULL?h1:b->next;
        }
        return a;
    }
};