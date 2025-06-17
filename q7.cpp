int Solution::findCount(const vector<int> &A, int B) {
    int left=0,right=A.size()-1,mid,temp,count=0;

    while(left<=right){
      mid=(left +right)/2;
      if(A[mid]==B){
          break;
      }
      else if(A[mid]<B){
          left=mid+1;
      } 
       else if(A[mid]>B){
          right=mid-1;
      }
    }
    if(A[mid]==B){
        temp=mid;
        while(A[temp]==B){
            count++;
            if(temp--==0){
                break;
            }
        }
        temp=mid;
        while(A[temp]==B){
            count++;
            if(temp++==A.size()-1){
                break;
            }
        }
    }
    if(count==0){
        return count;
    }
    return count-1;
}
