ListNode* Solution::getIntersectionNode(ListNode* A, ListNode* B) {
    ListNode* currnode1=A,*currnode2=B;
    if(currnode1==nullptr || currnode2==nullptr ){
        return nullptr;
    }
    while(currnode1!= currnode2){
      if (currnode1==nullptr){
          currnode1=B;
      }
      else if (currnode2==nullptr){
          currnode2=A;
      }
      else{
          currnode1=currnode1->next;
          currnode2=currnode2->next;
      }
    }
    return currnode1;
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
