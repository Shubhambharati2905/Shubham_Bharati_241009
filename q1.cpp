int Solution::evalRPN(vector<string> &A) {
    stack<int>st;
    for(int i=0;i<A.size();i++){
        if(A[i]=="+" || A[i]=="-" || A[i]=="/" || A[i]== "*" ){
            int b=st.top();
            st.pop();
            int c=st.top();
            st.pop();
            int d;
            if(A[i]=="+"){
                d=c+b;
            }
            else if(A[i]=="-"){
                d=c-b;
            }
            else if(A[i]=="*"){
                d=c*b;
            }
            else if(A[i]=="/"){
                d=c/b;
            }
            st.push(d);
        }
        else{
           int a= stoi(A[i]);
            st.push(a); 
        }
    }
    return st.top();
}
