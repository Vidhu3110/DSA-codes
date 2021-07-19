int subsetXORSum(vector<int>& nums) {
   int sum =0,i,j;
    int n = nums.size();

    for(i=0;i<n;i++){
        sum |=nums[i];
        cout<<sum<<" ";
    }
    sum = sum * pow(2,n-1);
    return sum;
}
