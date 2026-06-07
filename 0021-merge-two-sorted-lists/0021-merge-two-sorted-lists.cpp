class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;

        ListNode* a = NULL;
        ListNode* aa = NULL;

        while(list1!=NULL&&list2!=NULL){
            if(list1->val<=list2->val){
                if (a == NULL) { a = list1; aa = a; } 
                else { a->next = list1; a = a->next; }
                list1=list1->next;
            }
            else if(list1->val>list2->val){
                if (a == NULL) { a = list2; aa = a; } 
                else { a->next = list2; a = a->next; }
                list2=list2->next;
            }
        }
        if (list1 != nullptr) {
            a->next = list1;
        } else {
            a->next = list2;
        }

        return aa; 
    }
};
