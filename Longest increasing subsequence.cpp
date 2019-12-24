#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int lis(vector<int> v){
    vector<int> v1;
    for(int i=0;i<v.size();i++){
        v1.push_back(1);
    }
     int p=1;
    for(int j=1;j<v.size();j++){
        for(int i=0;i<j;i++){
            if(v[i]<v[j])
            v1[j]=max(v1[i]+1,v1[j]);
            p=max(v1[j],p);
        }
    }
   
    return p;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<int> v;
	    while(k--){int r; cin>>r;
	    v.push_back(r);}
	    cout<<lis(v)<<"\n";
	}
	return 0;
}
