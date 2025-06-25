vector<int> Solution::nextGreater(vector<int> &A) {
    vector<int>maximum;
    if (A.size()==1){
        return {-1};
    }
    int r=0;
    for(int i=0;i<A.size();i++){
       r=i+1;
           while(r<A.size()){
               if(A[r]<=A[i]){
                   r++;
               }
               else{
                   maximum.push_back(A[r]);
                   break;
               }
           }
        if(A[r]<=A[i]|| r==A.size()){
            maximum.push_back(-1);
        }   
    } 
   return maximum; 
}

