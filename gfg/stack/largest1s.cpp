/*
    efficient solution

    int maxRectWith1(int arr[][4], int n){
    int res = largestHist(arr[0]);
    for(int i =1;i<R;i++){
        for(int j = 0 ; j<C;j++){
        if(arr[i][j]==1)
        arr[i][j] += arr[i-1][j];
    }
    res = max(res,largestHist(arr[i]))
}
     return res;
}
*/
