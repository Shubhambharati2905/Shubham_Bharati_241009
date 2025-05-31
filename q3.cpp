#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;
struct fraction {
  int n, d; // (n/d)
};
int main() {
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        vector<pair<int,int>>v(n);
        for(int j=0;j<n;j++){
            cin>> a[j];
        }
        for(int j=0;j<n;j++){
            cin>> b[j];
        }
        for(int j=0;j<n;j++){
            v[j]={a[j],b[j]};
        }
        sort(v.begin(),v.end(),[](const pair<int,int> &a, const pair<int,int> &b){
        return 1LL * a.second * b.first < 1LL * b.second * a.first;;
    });
        long long int beauty=0,length=0;
            for(int j=0;j<n;j++){
                
                beauty=beauty+v[j].second*length;
                length=length+v[j].first;
            }
            cout<< beauty<<"\n";
        
    }   

}

