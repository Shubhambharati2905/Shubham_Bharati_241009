//this code doesn't work
class Solution {
  public:
    int maxLength(string& s) {
        int count=0,max_count=0;
        if(s[0]=='('&&s[1]==')'){
            count+=2;
        }
        else if(s[1]=='('&&s[2]==')'){
            count+=2;
        }
        for(int i=2;i<(s.size())-1;i++){
            if(s[i]=='('&&s[i+1]==')'&&s[i-1]==')'&&s[i-2]=='('){
                count+=2;
            }
            else if(s[i]==')'&&s[i-1]=='('){
                continue;
            }
            else if(s[i]=='('&&s[i+1]==')'){
                max_count=max(max_count,count);
                count=2;
            }
            else{
                max_count=max(max_count,count);
                count=0;
            }
        }
        max_count=max(max_count,count);
        return max_count;
    } 
};