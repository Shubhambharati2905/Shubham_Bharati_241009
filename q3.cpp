vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> result;
   stack<TreeNode*>st;
   TreeNode* curr= A;
   if(curr==nullptr){
       return result;
   }
   st.push(curr); 
   while(st.empty()==0){
      while(curr->left != nullptr){
          curr=curr->left;
          st.push(curr);
      }
      
      if(st.top()->right!=nullptr){
          result.push_back(st.top()->val);
          curr=st.top()->right;
          st.pop();
          st.push(curr);
      }
      else{
          while(st.top()->right==nullptr){
              result.push_back(st.top()->val);
              st.pop();
              if(st.empty()!=0){
                 return result; 
              }
          }
          result.push_back(st.top()->val);
          curr=st.top()->right;
          st.pop();
          st.push(curr);
      }      
   }
   return result;
}
