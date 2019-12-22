//https://leetcode.com/problems/maximum-length-of-repeated-subarray/
//brute force approach --O(N^3)--> N.A.
 int findLength(vector<int>& A, vector<int>& B) {int p=0;
        for(int i=0;i<A.size();i++){int j=0;
            while(j<B.size()&&A[i]!=B[j])
            j++;
            while(j<B.size()){
            if(j<B.size()&&A[i]==B[j])
            {
                int l=0;int k=i,t=j;
                while(t<B.size()&&k<A.size()&&A[k]==B[t])
                {   t++;k++;
                l++;}
                if(l>p)
                    p=l;
            }
        j++;}}
                                                    return p;
    }
