//1143. Longest Common Subsequence Bottom-up
class Solution {
public:
    int lcs(string text1, string text2,int m,int n,int **dp){
        if(m==0)
        return 0;
        if(n==0)
        return 0;
        
        if(dp[m][n]!=-1)
        return dp[m][n];
        
        if(text1[m-1]==text2[n-1]){
          dp[m][n]=1+lcs(text1,text2,m-1,n-1,dp);
          return dp[m][n];}
        else if(text1[m-1]!=text2[n-1]) {
        dp[m][n]=max(lcs(text1,text2,m,n-1,dp),lcs(text1,text2,m-1,n,dp));
        return dp[m][n];
        }
        else return dp[m][n];
        }
     
    int longestCommonSubsequence(string text1, string text2) {
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
       
       
};

//TOP-DOWN
class Solution {
public:
    int lcs(string text1, string text2,int m,int n,int **dp){
       for(int i=1;i<=m;i++){
           for(int j=1;j<=n;j++){
               if(text1[m-i]==text2[n-j])
                dp[i][j]=1+dp[i-1][j-1];
                else 
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
           }
       }
        return dp[m][n];
        }
     
    int longestCommonSubsequence(string text1, string text2) {
        int m=text1.length();
        int n=text2.length();
        int **dp=new int*[m+1];
        for(int i=0;i<m+1;i++){
            dp[i]=new int[n+1];
        }
    
        
    
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            dp[i][j]=0;
        }
    }
       int t= lcs(text1,text2,m,n,dp);
        return t;
    
    }
       
       
};



