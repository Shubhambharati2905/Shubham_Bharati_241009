void backtrack(vector<vector<int>>&result,vector<int>&A,int start,vector<int>&subset){
    result.push_back(subset);
    for(int i=start;i<A.size();++i){
        if(i>start && A[i]==A[i-1]){
            continue;
        }
        subset.push_back(A[i]);
        backtrack(result,A,i+1,subset);
        subset.pop_back();
    }
}
    

vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    sort(A.begin(),A.end());
    vector<vector<int>>result;
    vector<int>subset;
    backtrack(result,A,0,subset);
    return result;
}
