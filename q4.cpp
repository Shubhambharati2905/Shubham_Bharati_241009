/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> path(TreeNode* curr,int s,vector<int>&v){
    if(curr!=nullptr){
       v.push_back(curr->val); 
       if(curr->val==s){
           return v;
       }
       else{
           vector<int>vl=v;
           vl=path(curr->left,s,vl);
           if(vl.empty()){
              vector<int>vr=v;
              vr=path(curr->right,s,vr);
              if(vr.empty()){
                  return vr;
              }
              else{
                  return vr;
              } 
           }
           else{
               return vl;
           }
           }
       }
       else{
           vector<int>v3;
           return v3;
       }    
    
    
}
int Solution::lca(TreeNode* A, int B, int C) {
    vector<int>v1;
    vector<int>v2;
    v1=path(A,B,v1);
    v2=path(A,C,v2);
    if(v1.empty()||v2.empty()){
        return -1;
    }
    int n=min(v1.size(),v2.size());
    int prev;
    for(int i=0;i<n;i++){
        if(v1[i]==v2[i]){
           prev=v1[i]; 
        }
        else{
            break;
        }
    }
    return prev;
}

