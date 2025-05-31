#include <iostream>
#include<vector>
#include <algorithm>
#include<cmath>
#include <numeric>
using namespace std;
 
int main() {
    int n;
    int x;
    cin>>n;
    cin>>x;
    vector<int>v(n);
    long long int total=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        total=total+v[i];
    }
    if(total < x){
        cout<<0;
        return 0;
    }
    int count=0;
    int sum=0;
    int left=0,right=0;
    while(left<n&&right<=n){
            if(sum==x){
                sum=sum+v[right];
                count++;
                sum=sum-v[left++];
                right++;
            }
            else if(sum<x){
                sum=sum+v[right];
                right++;
            }
            else if(sum>x){
                sum=sum-v[left++];
                
                
        }
        
    }
    cout<<count;
	// your code goes here
 

}
