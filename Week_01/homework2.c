struct ListNode * mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
        if (l1 == NULL || l2 == NULL) {
            return l1 != NULL ? l1 : l2;
        }
        struct ListNode * m = NULL;
        if (l1->val < l2->val){
            m = l1;
            m->next = mergeTwoLists(l1->next,l2);
        }else{
            m = l2;
            m->next = mergeTwoLists(l1,l2->next);
        }   
    return m;
}
