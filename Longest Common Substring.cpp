//THIS IS IMPLEMENTED BY Concept of largest common suffix in the 2d array

int lcs(string text1, string text2,int m,int n,int **dp){int max=INT_MIN;
       for(int i=1;i<=m;i++){
           for(int j=1;j<=n;j++){
               if(text1[i-1]==text2[j-1])
       { dp[i][j]=1+dp[i-1][j-1];
       if(dp[i][j]>max)
        max=dp[i][j];}
       else 
           dp[i][j]=0;
           }
       }return max;
        }
     
    int longestCommonSubstring(string text1, string text2) {
        int m=text1.length();
        int n=text2.length();
        int **dp=new int*[m+1];
        for(int i=0;i<m+1;i++){
            dp[i]=new int[n+1];
        }
    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            dp[i][j]=-1;
        }
    }
       int t= lcs(text1,text2,m,n,dp);
        return t;
    
    }
