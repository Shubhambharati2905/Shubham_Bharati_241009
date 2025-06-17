class Solution {
    int factorial(int n){
        int result=1;
        while(n>1){
            result= result*n--;
        }
        return result;
    }
public:
    string getPermutation(int n, int k) {
        int digit=n;
        string s;
        for(int i=0;i<n;i++){
            char temp='1'+i;
            s=s+temp;
        }
        string result;
        k--;
        while(digit>0){
            int f=factorial(digit-1);
            int i=k/f;
            k=k%f;
            result=result+s[i];
            s.erase(i,1);
            digit--;
        }
        return result;
    }
};
