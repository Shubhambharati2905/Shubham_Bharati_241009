ListNode* Solution::reverseList(ListNode* A) {
    ListNode* prev=A,*temp;
    A= A->next;
    prev-> next= nullptr;
    while(A!=  nullptr ){
        temp=A;
        A=A -> next;
        temp -> next= prev;
        prev=temp;
    }
    return prev;
}
