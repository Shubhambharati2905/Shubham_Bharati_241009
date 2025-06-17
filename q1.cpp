class Solution {
  public:
    Node* findFirstNode(Node* head) {
        unordered_set<Node*>check;
        Node *currnode= head;
        while(currnode!=nullptr){
            if (check.find(currnode)!= check.end()){
                return currnode;
            }
            else{
                check.insert(currnode);
                currnode=currnode->next;
            }
        }
        return nullptr; // your code here
    }
};
