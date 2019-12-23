//https://leetcode.com/problems/maximum-length-of-repeated-subarray/submissions/
// Variation of LONGEST COMMON SUBSTRING
class Solution {
public:
    int fl(vector<int> A,int n,vector<int> B,int m,int** dp){int p=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(A[n-i]==B[m-j]){
                    dp[i][j]=dp[i-1][j-1]+1;
                    if(dp[i][j]>p)
                        p=dp[i][j];
                }
                else
                    dp[i][j]=0;
            }
        }
        return p;
    }
    int findLength(vector<int>& A, vector<int>& B) {
        int n=A.size();
        int m=B.size();
        
        int **dp=new int*[n+1];
        for(int i=0;i<=n;i++){
            dp[i]=new int[m+1];
        }
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                dp[i][j]=0;
            }
        }
        return fl(A,n,B,m,dp);
    }
};
