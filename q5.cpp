/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::getSuccessor(TreeNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A==nullptr){
        return NULL;
    }
    TreeNode* curr=A;
    TreeNode* prev=nullptr;
    while(curr!= nullptr){
        if(curr-> val>B){
            prev=curr;
            curr=curr-> left; 
        }
        else if(curr-> val<B){
            curr=curr->right;
        }
        else{
            if(curr->right != nullptr){
                TreeNode* ans;
                ans=curr->right;
                while(ans->left!= nullptr){
                    ans=ans->left;
                }
                return ans;
            }
            else{
                return prev;
            }
        }
    }
}
