class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head==nullptr){
            return head;
        }
        ListNode* currnode=head->next,*prev=head,*temp=nullptr;
        head->next= nullptr;
        while (currnode!= nullptr ){
            temp= currnode-> next;
            currnode-> next=prev;
            prev= currnode;
            currnode=temp;
        }
        return prev;
    }
};
