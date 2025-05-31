#include <bits/stdc++.h>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
	int t;
	cin>> t;
	for(int i=0;i<t;i++){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    vector<int>sorted(v);
	    sort(sorted.begin(),sorted.end());
	    unordered_map<int,int>even_ini,odd_ini,even_sort,odd_sort;
	    for(int i=0;i<n;i++){
	        if (i%2==0){
	           even_ini[v[i]]++;
	           even_sort[sorted[i]]++;
	        }
	        else{
	            odd_ini[v[i]]++;
	            odd_sort[sorted[i]]++;
	        }
	    }
	    if(odd_ini==odd_sort && even_ini==even_sort){
	        cout<< "YES\n";
	    }
	    else{
	        cout<< "NO\n";
	    }
	}// your code goes here

}
