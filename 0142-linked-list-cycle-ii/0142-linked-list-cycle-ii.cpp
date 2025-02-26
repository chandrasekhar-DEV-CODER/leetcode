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
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,bool>a;
        int i=0;
        ListNode *temp=head;
        while(temp!=NULL){
            if(a.find(temp)!=a.end()){
                return temp;
            }
            a[temp]=true;
            temp=temp->next;
        }
        return NULL;
    }
};