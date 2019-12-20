#include <bits/stdc++.h>
using namespace std;
//Dynammic Programming Kadane's Algo O(n)
int kadane(vector<int> v){
    int msum=v[0];
    int lsum=v[0];
    for(int i=1;i<v.size();i++){
        lsum=max(lsum+v[i],v[i]);
        if(msum<lsum)
        msum=lsum;
    }
    return msum;
}
//BRUTE FORCE O(n^3)
int maxSubarraySum(vector<int> v){
    int msum=INT_MIN;
    for(int i=0;i<v.size();i++){
        for(int j=i;j<v.size();j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum+=v[k];
            }
            if(sum>msum)
            msum=sum;
        }
    }
    return msum;
}
//BRUTE FORCE optimised O(n^2)
int optimisedSubarraysum(vector<int> v){
    int msum=INT_MIN;
    for(int i=0;i<v.size();i++){int sum=0;
    
        for(int j=i;j<v.size();j++){
            sum=sum+v[j];
            if(sum>msum)
            msum=sum;
        }
    }
    return msum;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<int> v;
	    while(k--){
	       int p;
	       cin>>p;
	       v.push_back(p);
	    }
	   
	   cout<<maxSubarraySum(v)<<endl; 
	   cout<<optimisedSubarraysum(v)<<endl;
	   cout<<kadane(v)<<endl;
	    
	}
	return 0;
}
