/*
int longestIncSub(int arr[],int n){
    int lis[n];
    lis[0] = 1;
    for(int i = 1;i<n;i++){
        lis[i] = 1
        for(int j = 0;j<i;j++){
            if(arr[i]>arr[j])
                lis[i] = max(lis[i],lis[j]+1);
        }
    }
    int res = lis[0];
    for(int i=0;i<n;i++)
        res = max(lis[i], res);

    return res;
    time complexity is theta(n^2) and space is theta(n)


    we have a better solution O(nlogn)
    int Ceil(int tail[],int l , int r , int key){
        while(l<r){
            int mid=l+(r-l)/2
            if(tail[mid]>=key)
                r = m;
            else
                l = m+1;
        }
        return r;
    }
    int LIS(int arr[] , int n){
        int tail[n] , len = 1;
        tail[0] = arr[0];
        for(int i = 1;i<n;i++){
            if(arr[i]>tail[len-1]){
                tail[i] = arr[i];
                len++;
            }
            else{
                int c = Ceil(tail,0,len-1,arr[i])
                tail[c] = arr[i];
            }   
        }
        return len;
    }
}

variation in LIS 
1. min deletions to make array sorted

*/