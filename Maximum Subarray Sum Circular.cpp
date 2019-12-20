int maxSubarraySumCircular(vector<int>& A) {
          int maxsum=INT_MIN;
          int lmsum=A[0];
        for(int i=1;i<A.size();i++){
            lmsum=max(lmsum+A[i],A[i]);
            if(lmsum>maxsum)
                maxsum=lmsum;
        }
        int lsum=A[0];
        int minsum=INT_MAX;
        for(int i=1;i<A.size();i++){
            lsum=min(lsum+A[i],A[i]);
            if(lsum<minsum)
                minsum=lsum;
        }
        int total=0;
        for(int i=0;i<A.size();i++){
            total+=A[i];
        }
        if(total-minsum==0)
            return maxsum;
        else
        return max(maxsum, total-minsum);
    }
