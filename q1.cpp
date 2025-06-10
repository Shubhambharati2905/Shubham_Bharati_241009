int longestSubarrayWithSumK(vector<int> a, long long k) {
    int l=0,r=0,sum=0,count=0,maximum=0;
    while(l<a.size() && r<a.size()){
        if(sum<k){ 
            sum+=a[r++];
            count++;
        }
        else if(sum==k){
            maximum=max(count,maximum);
            sum+=a[r++];
            count++;
        }
        else{
            sum-=a[l++];
            count--;
        }
    }
    return maximum;
    // Write your code here
}
