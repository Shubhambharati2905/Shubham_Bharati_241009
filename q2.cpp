#include <bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int x;
    cin>>x;
    vector<int>v(x);
    for(int i=0;i<x;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    unordered_map<int,int>freq;
    for(int i=0;i<x;i++){
        ++freq[v[i]];
    }
    int maximum=0;
    for(int i=0;i<x;i++){
        maximum=max(maximum,freq[v[i]]);
    }
    cout<<maximum;
	// your code goes here

}
