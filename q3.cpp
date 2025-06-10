class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,count=0,maximum=0;
        unordered_map<char,int>freq;
        if(s.size()==1){
            return 1;
        }
        while(l<s.size()&& r<s.size()){
            if(freq[s[r]]==0){
                freq[s[r++]]++;
                maximum=max(maximum,++count);
            }
            else{
                freq[s[l++]]--;
                maximum=max(maximum,count--);
            } 
        }
        return maximum;

    }
};
