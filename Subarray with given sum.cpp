
//hash map solution O(N)
#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;
void func(vector<long long int> v,int s){
    unordered_map<long long int,long long int> m1;long long int sum=0;
    m1.insert(make_pair(0,-1));
    int n=v.size();
   for(long long int i=0;i<n;i++){
       sum+=v[i];
       
           if(m1.find(sum-s)!=m1.end()){
           cout<<m1[sum-s]+2<<" "<<i+1<<endl;
           return;}
           else
           m1.insert(make_pair(sum,i));
       
   }
   cout<<"-1"<<endl;
    return;        
}
//Optimised Brute force O(n^2)

void func(vector<int> v,int s){
    for(int i=0;i<v.size();i++){int k=0;
        for(int j=i;j<v.size();j++){
            k+=v[j];
            if(k==s)
            {cout<<i+1<<" "<<j+1<<endl;
            return;}
        }
    }
    cout<<"-1"<<endl;
}
int main() {
	long long int k;
	cin>>k;
	while(k--){
	    long long int n,s;
        cin>>n>>s;
        vector<long long int> arr;
        while(n--){
            int t;
            cin>>t;
            arr.push_back(t);
            
        }
            func(arr,s);
	}
	return 0;
}
