int Solution::solve(vector<int> &A, int B) {
    if(B>A.size()){
        return 0;
    }
    if(B==0){
        return 0;
    }
    unordered_map<int,int>freq;
    unordered_map<int,int>freq1;
    int l=0,r=0,count1=0,count2=0;
    freq[A[l]]++;
    freq1[A[l]]++;
    while(l<A.size() && r<A.size()){
        if(freq.size()>B){
            if(freq[A[l++]]--==1){
                freq.erase(A[l-1]);
            }
        }
        else if(freq.size()<=B){
            count1=count1+r-l+1;
            if(r==A.size()-1){
                r++;
                continue;
            }
            freq[A[++r]]++;
        }
    }
    l=0,r=0;
    while(l<A.size() && r<A.size()){
        if(freq1.size()>B-1){
            if(freq1[A[l++]]--==1){
                freq1.erase(A[l-1]);
            }
        }
        else if(freq1.size()<=B-1){
            count2=count2+r-l+1;
            if(r==A.size()-1){
                r++;
                continue;
            }
            freq1[A[++r]]++;
        }
    }
    
    
    return count1-count2;
}
