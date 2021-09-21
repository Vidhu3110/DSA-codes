/*
    int eD(string s1 , string s2 , int m , int n){
        int op;
        if(m==0)
            return n;
        if(n==0)
            return m;


        if(s1[m-1]==s2[n-1]){
            return eD(s1,s2,m-1,n-1)
        }
        else{
             return 1+min(eD(s1,s2,m,n-1),eD(s1,s2,m-1,n),eD(s1,s2,m-1,n-1))
        }
    }
    dp solution
     int ed(string s1,string s2 , int m , int n){
         int dp[m+1][n+1];

        for(int i =0;i<=m;i++)
            dp[i][0] =  i;
        for(int i = 0 ; i<=n;i++)
            dp[0][i] = i;
        

        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(s1[i-1]=s2[j-1])
                    dp[i][j] = do[i-1][j-1];
                else
                    dp[i][j] =1 + min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1]);
            }
        }
        return dp[m][n];
     }
*/