int Solution::solve(vector<int> &A, int B) {
    int l=0, r=0,sum=A[l],i=0,count=0;
    while(l<A.size()&& r<A.size()){
        if(sum>=B){
            sum=sum-A[l++];
        }
        else if(sum<B){
            if(sum!=0){
                count=count+r-l+1;
            }
            
            sum=sum+A[++r];
        }
    }
   return count; 
}
