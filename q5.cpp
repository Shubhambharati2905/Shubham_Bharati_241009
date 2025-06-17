ListNode* Solution::solve(ListNode* A) {
    ListNode* temp=A;
    vector<int>odd,even;
    int i=1;
    while(temp != nullptr){
        if(i%2==1){
            odd.push_back(temp->val);
        }
        else{
            even.push_back(temp->val);
        }
        i++;
        temp=temp->next;
    }
    while(A != nullptr){
        temp=A;
        A=A->next;
        delete temp;
    }
   reverse(even.begin(),even.end());
   ListNode* head = new ListNode(odd[0]),*prev;
   prev= head;
   int e=0,o=1;
   for(int i=1;i<even.size()+odd.size();i++){
       ListNode* temp;
       if(i%2==1 && e < even.size() ){
           temp=new ListNode(even[e++]);
           prev->next= temp;
           prev=temp;
       }
       else{
           temp = new ListNode(odd[o++]);
           prev->next= temp;
           prev=temp;
       }
   }
   return head;
}
