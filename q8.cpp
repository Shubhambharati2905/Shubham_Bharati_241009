int Solution::kthsmallest(const vector<int> &A, int B) {
    int max=A[0],min=A[0];
    for(int i=0;i<A.size();i++){
        if(max<A[i]){
            max=A[i];
        }
        if(min>A[i]){
            min=A[i];
        }
    }
    int mid,count1,count2;
    while(min<=max){
        mid=(max+min)/2;
        count1=0,count2=0;
        for(int i=0;i<A.size();i++){
            if(A[i]<mid){
                count1++;
            }
            else if(A[i]==mid){
                count2++;
            }
            
        }
        if(count1>=B){
            max=mid-1;
        }
        else if(count1+count2>=B){
            return mid;
        }
        else{
            min=mid+1;
        }
    }
    return 0;
}
