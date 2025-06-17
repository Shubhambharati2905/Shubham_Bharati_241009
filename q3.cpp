ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode* currnode= A->next, *prev= A ;
    while (currnode != nullptr ){
        if(currnode->val==prev->val){
            prev->next=currnode->next;
            delete currnode;
            currnode=prev->next;
        }
        else{
            prev=currnode;
            currnode=currnode->next;
        }
    }
    return A;
}
