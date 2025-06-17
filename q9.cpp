int Solution::pow(int x, int n, int d) {
    long long X=x,N=n,D=d;
    if(D==1){
        return 0;
    }
    long long result=1;
    X=((X%D)+D)%D;
    while(N>0){
        if(N%2==1){
            result=(result*X)%D;
        }
        X=(X*X)%D;
        N=N/2;
    }
    return int(result); 
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
}
