class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int>freq_p;
        unordered_map<char,int>freq_s;
        vector<int>index;
        if(s.size()<p.size()){
            return index;
        }
        int count=0,check=0;
        for(int i=0;i<p.size();i++){
            freq_p[p[i]]++;
            freq_s[s[i]]++;
        }   
        int l=0,r=p.size()-1;
        while(l<s.size() && r<s.size()){
            if(freq_s==freq_p){
                index.push_back(l);
            }
                if(freq_s[s[l++]]--==1){
                    freq_s.erase(s[l-1]);
                }
            if(r==s.size()-1){
                r++;
                continue;
            }
            r++;
            freq_s[s[r]]++;
            
        }
        return index;
    }
};