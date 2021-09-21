/*
    coin change dp solution(no of combinations)
    recursive sol 

    int countCoin(vector<int>&arr ,int n  int sum){
        if(sum == 0)
            return 1; 
        if(n==0)
            return 0;

        int res = countCoin(arr,n-1,sum);
        if(arr[n-1]<=sum)
            res+= countCoin(arr,n,sum-arr[n-1]);
        return res;
    }

    dp solution 

    int dp[sum+1][n+1];

    int getCoin(int coins[],int n , int sum){
        for(int i = 0 ; i<=n;i++)
            dp[0][i] = 1;
        for(int i = 1 ; i<=sum;i++)
            dp[i][0] = 0;

        for(int i = 1 ; i<=sum;i++){
            for(int j = 1 ;j<=n;j++){
                dp[i][j] = dp[i][j-1]
                if(coins[j-1]<=i)
                    dp[i][j] = dp[i-coins[j-1]][j];
            }
        }
        return dp[sum][n];
    }

*/